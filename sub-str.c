#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter size of string: ");
    scanf("%d", &n);

    char str[n + 1];

    printf("Enter string: ");
    scanf("%s", str);

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            if (!(i == n - 1 && j == n - 1))
            {
                printf(",");
            }
        }
    }

    return 0;
}