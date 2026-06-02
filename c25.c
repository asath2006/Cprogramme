#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **s1, char **s2)
{
    char *temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main(void)
{
    char buffer1[200];
    char buffer2[200];

    scanf("%s", buffer1);
    scanf("%s", buffer2);

    char *str1 = malloc(strlen(buffer1) + 1);
    char *str2 = malloc(strlen(buffer2) + 1);

    if (str1 == NULL || str2 == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    strcpy(str1, buffer1);
    strcpy(str2, buffer2);

    printf("Before swap: %s %s\n", str1, str2);

    swap(&str1, &str2);

    printf("After swap:  %s %s\n", str1, str2);

    free(str1);
    free(str2);

    return 0;
}
