#include <stdio.h>
int main()
{
    int n,result;
    printf("Enter the no to find factorial:");
    scanf("%d", &n);
    result=1;

    for (int i = 1; i <=n; i++)
    {
        result*=i;
        
    }

    printf("%d", result);
    return 0;
}
