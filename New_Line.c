// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char text[1000];

    printf("Enter file name: ");
    scanf("%s", text);

    fp = fopen(text, "a");

    if (fp == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}