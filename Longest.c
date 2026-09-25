// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char word[100], longest[100] = "";
    printf("Enter a sentence: ");
    while (scanf("%s", word) == 1) 
    {
        if (strlen(word) > strlen(longest)) 
        {
            strcpy(longest, word);
        }
        if (getchar() == '\n')
            break;
    }
    printf("%s\n", longest);
    return 0;
}