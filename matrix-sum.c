#include <stdio.h>

int main()
{
    int r, c, sum = 0;
    printf("enter the size of matrix");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("enter elements");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {   scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}