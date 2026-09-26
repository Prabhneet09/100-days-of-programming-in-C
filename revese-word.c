#include <stdio.h>

int main()
{
    int n, i, start, end, j;
    char temp;

    printf("Enter size of sentence: ");
    scanf("%d", &n);
    getchar();

    char str[n + 1];

    printf("Enter sentence: ");
    fgets(str, n + 1, stdin);

    start = 0;

    for (i = 0; i <= n; i++)
    {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n')
        {
            end = i - 1;

            for (j = start; j < end; j++, end--)
            {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;
            }

            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}