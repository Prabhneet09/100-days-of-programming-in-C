#include <stdio.h>

int main()
{
    int n, d;
    int p = 1;
    printf("enter your number");
    scanf("%d", &n);

    while(n > 0)
    {
        d = n % 10;
        if(d % 2 != 0)
        {
            p = p * d;
        }
        n = n / 10;
    }

    printf("%d", p);

    return 0;
}
