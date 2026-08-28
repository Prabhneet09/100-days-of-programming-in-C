//  Write a program to find the sum of digits of a number.

#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter your number:");
    scanf("%d", &n);

    for (int i = n; i!=0 ; i=i/10 )
    {
        int d = i % 10;
        sum=sum+d;
    }
    printf("sum is: %d",sum );

    return 0;

}