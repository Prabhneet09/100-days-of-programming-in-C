#include <stdio.h>
int main()
{
    int num;
    printf("Enter your no.");
    scanf("%d", &num);
    
    if (num==0)
    {
        printf("Your no is zero.");
    }
    else 
    { 
        if (num >0)
    {
        printf("your no is positive.");
    }
        else 
        {
        printf("your no is negative.");
        }
}
return 0;
}