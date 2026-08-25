#include <stdio.h>
int main()
{
    int n,rev = 0;

    printf("Enter your no:");
    scanf("%d",&n);
    for (int i = n; i != 0; i = i / 10)
    {
        int d = i % 10;
        rev = rev * 10 + d;
    }
    if (n==rev)
    {
        printf("It is a palindrome.");
    }
    else{
        printf("It is not a palindrome.");
    }
    

}