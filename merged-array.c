#include <stdio.h>
int main()
{   
    int n, m;
    printf("enter no of elements in 1st array");
    scanf("%d", &n);
    printf("enter no of elements in 2nd array");
    scanf("%d", &m);

    int a[n],b[m],c[n+m];

    for (int i =0; i<n; i++)
    {
        printf("enter your number");
        scanf("%d", &a[i]);
    }

    for(int j = 0; j<m; j++)
    {
        printf("enter your number ");
        scanf("%d", &b[j]);
    }

    for( int k= 0 ; k<n; k++)
    {
        c[k]=a[k];
    }

    for (int h =0 ; h<m ; h++)
    {
        c[n+h]=b[h];
    }

    for (int u=0; u<n+m ; u++)
    {
        printf("%d  ", c[u]);
    }
    return 0;
}