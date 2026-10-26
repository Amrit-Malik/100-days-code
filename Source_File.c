// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
int main()
{
    char source[100], destination[100];
    FILE *fs, *fd;
    char ch;
    printf("Source File: ");
    scanf("%s", source);
    printf("Destination File: ");
    scanf("%s", destination);
    fs = fopen(source, "r");
    if (fs == NULL)
    {
        printf("Unable to open source file.\n");
        return 1;
    }
    fd = fopen(destination, "w");
    if (fd == NULL)
    {
        printf("Unable to create destination file.\n");
        fclose(fs);
        return 1;
    }
    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, fd);
    }
    fclose(fs);
    fclose(fd);
    printf("File copied successfully to %s\n", destination);
    return 0;
}