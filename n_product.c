#include <stdio.h>
int main()
{
    int n, c=1;
    printf("Enter the last no:");
    scanf("%d", &n);

    for (int i=1 ; i<=n ; i++)
    {
        c=c*i;
    }
    printf("the result is: %d", c);
    return 0;
    
}