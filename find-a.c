#include <stdio.h>

int main()
{
    long long n;
    int count[10] = {0};

    scanf("%lld", &n);

    while(n > 0)
    {
        int digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    int max = count[0];
    int ans = 0;

    for(int i = 1; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}