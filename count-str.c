#include <stdio.h>

int main()
{
    int n, i;
    int vowels = 0, consonants = 0;

    printf("Enter length: ");
    scanf("%d", &n);

    char str[n + 1];

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; i < n; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' ||
           str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}