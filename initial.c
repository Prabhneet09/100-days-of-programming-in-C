#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the length of name: ");
    scanf("%d", &n);

    char name[n + 1];

    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("%c.", name[0]);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
            printf("%c.", name[i + 1]);
        }
    }

    return 0;
}