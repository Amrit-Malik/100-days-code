// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *in, *out;
    char ch;
    in = fopen("input.txt", "r");
    if (in == NULL)
    {
        printf("Input file not found.\n");
        return 1;
    }
    out = fopen("output.txt", "w");
    while ((ch = fgetc(in)) != EOF)
    {
        fputc(toupper(ch), out);
    }
    fclose(in);
    fclose(out);
    printf("Contents converted to uppercase and written to output.txt\n");
    return 0;
}