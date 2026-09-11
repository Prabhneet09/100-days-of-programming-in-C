#include <stdio.h>

int main()
{
    int n, key;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int found = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == key)
        {
            found = mid;
            break;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == -1)
        printf("-1");
    else
        printf("Found at index %d", found);

    return 0;
}