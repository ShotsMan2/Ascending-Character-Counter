#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[99];
    int i, len = 0;

    printf("str girin ");
    scanf("%s", str);

    i = 0;

    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    int sum = 0;

    for (i = 0; i < len; i++)
    {
        if (str[i + 1] > str[i])
        {
            sum++;
        }
    }

    printf("%d", sum);
}
