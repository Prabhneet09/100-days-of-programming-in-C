#include <stdio.h>

int main()
{
    int n, num, pos;

    scanf("%d", &n);

    int a[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &num);

    pos = n;

    for (int i = 0; i < n; i++)
    {
        if (num < a[i])
        {
            pos = i;
            break;
        }
    }

    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = num;
    n++;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}