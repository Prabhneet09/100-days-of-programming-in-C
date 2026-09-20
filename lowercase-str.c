#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter length: ");
    scanf("%d", &n);

    char str[n + 1];

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; i < n; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);

    return 0;
}