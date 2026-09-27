#include <stdio.h>

int main()
{
    int n, i, last = 0;

    printf("Enter the length of name: ");
    scanf("%d", &n);

    char name[n + 1];

    printf("Enter name: ");
    scanf(" %[^\n]", name);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            last = i + 1;
        }
    }

    printf("%c.", name[0]);

    for (i = 1; i < last; i++)
    {
        if (name[i] == ' ' && i + 1 < last)
        {
            printf("%c.", name[i + 1]);
        }
    }

    printf(" %s", &name[last]);

    return 0;
}