#include <stdio.h>
int main()
{
    int n,c;
    printf("Enter the last number: ");
    scanf("%d", &n);
    c=0;
    for (int i = 1; i <=n; i++)
    {
        c=c+i;
    }
    printf("The sum is: %d", c);
return 0;

}