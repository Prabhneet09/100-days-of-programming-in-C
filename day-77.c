#include <stdio.h>

int main()
{
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if(input == NULL)
    {
        printf("Input file not found");
        return 0;
    }

    while((ch = fgetc(input)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 32;

        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("File converted successfully.");

    return 0;
}