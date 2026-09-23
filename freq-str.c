#include <stdio.h>

int main()
{
    int n, i, count = 0;
    char str[100], ch;

    printf("Enter length of string: ");
    scanf("%d", &n);

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);


    for(i = 0; i < n; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }


    printf("%d", count);

    return 0;
}