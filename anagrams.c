#include <stdio.h>

int main()
{
    int n1, n2, i;
    int count[26] = {0};

    printf("Enter size of first string: ");
    scanf("%d", &n1);

    char a[n1 + 1];

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter size of second string: ");
    scanf("%d", &n2);

    char b[n2 + 1];

    printf("Enter second string: ");
    scanf("%s", b);

    if (n1 != n2)
    {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; i < n1; i++)
    {
        count[a[i] - 'a']++;
    }

    for (i = 0; i < n2; i++)
    {
        count[b[i] - 'a']--;
    }

    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}