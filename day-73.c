#include <stdio.h>

int main()
{
    FILE *fp;
    char ch, prev = ' ';
    int characters = 0, words = 0, lines = 1;

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
            lines++;

        if(ch != ' ' && ch != '\n' && (prev == ' ' || prev == '\n'))
            words++;

        prev = ch;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d", lines);

    return 0;
}