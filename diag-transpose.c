#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m][n];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int k = 0; k < m + n - 1; k++)
    {
        if(k % 2 == 0)
        {
            for(int i = k; i >= 0; i--)
            {
                int j = k - i;

                if(i < m && j < n)
                    printf("%d ", a[i][j]);
            }
        }
        else
        {
            for(int j = k; j >= 0; j--)
            {
                int i = k - j;

                if(i < m && j < n)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}