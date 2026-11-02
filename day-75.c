#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "a");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    printf("Enter text to append: ");
    fgets(text, 100, stdin);

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}