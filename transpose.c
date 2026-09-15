#include <stdio.h>

int main()
{
    int r, c;
    int a[100][100];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of the matrix:\n");

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose of the matrix is:\n");

    for(int j = 0; j < c; j++)
    {
        for(int i = 0; i < r; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}