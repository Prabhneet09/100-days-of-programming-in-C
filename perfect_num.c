#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for (int i = 1 ; i <=(n/2)+1 ; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
    }

    if (n==sum)
    {
        printf("It is a perfect square.");
    }

    else
    {
        printf("It is not a perfect square.");
    }
    
    return 0;
}