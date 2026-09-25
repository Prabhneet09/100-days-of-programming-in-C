#include <stdio.h>

int main()
{
    int n, i, len = 0, max = 0, start = 0, maxstart = 0;

    printf("Enter size of sentence: ");
    scanf("%d", &n);
    getchar();

    char str[n + 1];

    printf("Enter sentence: ");
    fgets(str, n + 1, stdin);

    for (i = 0; i <= n; i++)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if (len > max)
            {
                max = len;
                maxstart = start;
            }

            len = 0;
            start = i + 1;
        }
    }

    for (i = maxstart; i < maxstart + max; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}