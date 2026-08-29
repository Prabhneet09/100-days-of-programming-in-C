#include <stdio.h>

int main()
{
    long long n;
    int d;
    long long ans = 0;
    long long p = 1;

    scanf("%lld", &n);

    while(n > 0)
    {
        d = n % 10;

        if(d == 0)
            ans = ans + 1 * p;
        else
            ans = ans + 0 * p;

        p = p * 10;
        n = n / 10;
    }

    printf("%lld", ans);

    return 0;
}