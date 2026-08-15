#include <stdio.h>
int main()
{ 
int n;
printf("Enter a no to check:");
scanf("%d",n);
if (n%2==0)
{
    printf("No. is even.");
}
else
{
    printf("No. is odd.");
}
return 0;
}