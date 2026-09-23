#include <stdio.h>

int main()
{
    int n, i;
    char str[100];

    printf("Enter length of string: ");
    scanf("%d", &n);

    printf("Enter string: ");
    scanf("%s", str);


    for(i = 0; i < n; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }


    printf("%s", str);

    return 0;
}