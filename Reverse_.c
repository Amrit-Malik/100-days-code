// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
void reverseWord(char str[], int start, int end) 
{
    char temp;
    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() 
{
    char sentence[200];
    int i = 0, start = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    while (sentence[i] != '\0') 
    {
        if (sentence[i] == ' ') 
        {
            reverseWord(sentence, start, i - 1);
            start = i + 1;
        }
        i++;
    }
    reverseWord(sentence, start, i - 1);
    printf("%s\n", sentence);
    return 0;
}