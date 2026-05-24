#include<stdio.h>

void uppercase(char str[], int i)
{
    if(str[i] == '\0')
    {
        return;
    }

    if(str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] = str[i] - 32;
    }

    uppercase(str, i + 1);
}

int main()
{
    char str[100];

    scanf("%s", str);

    uppercase(str, 0);

    printf("%s", str);

    return 0;
}
