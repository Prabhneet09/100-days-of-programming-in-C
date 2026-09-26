#include <stdio.h>

int main()
{
    int n, i, j, rotation = 0;

    printf("Enter size of strings: ");
    scanf("%d", &n);

    char a[n + 1], b[n + 1];

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    for (i = 0; i < n; i++)
    {
        rotation = 1;

        for (j = 0; j < n; j++)
        {
            if (a[(i + j) % n] != b[j])
            {
                rotation = 0;
                break;
            }
        }

        if (rotation == 1)
        {
            break;
        }
    }

    if (rotation == 1)
    {
        printf("Rotation");
    }
    else
    {
        printf("Not rotation");
    }

    return 0;
}