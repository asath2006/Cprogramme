#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
    int fd = open("test.txt", O_RDWR);

    if(fd == -1)
    {
        printf("File open error");
        return 1;
    }

    struct stat st;

    fstat(fd, &st);

    int size = st.st_size;

    char *data = mmap(NULL, size,
                      PROT_READ | PROT_WRITE,
                      MAP_SHARED, fd, 0);

    if(data == MAP_FAILED)
    {
        printf("Mapping failed");
        return 1;
    }

    int i, j = 0;

    for(i = 0; i < size; i++)
    {
        if(data[i] != '.')
        {
            data[j] = data[i];
            j++;
        }
    }

    ftruncate(fd, j);

    munmap(data, size);

    close(fd);

    return 0;
}
