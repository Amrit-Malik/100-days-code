// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100];
    int lastIndex[256];
    int i, start = 0, maxLen = 0;
    for (i = 0; i < 256; i++) 
    {
        lastIndex[i] = -1;
    }
    printf("Enter a string:\n");
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++) 
    {
        if (lastIndex[(int)s[i]] >= start) 
        {
            start = lastIndex[(int)s[i]] + 1;
        }
        lastIndex[(int)s[i]] = i;
        if (i - start + 1 > maxLen) 
        {
            maxLen = i - start + 1;
        }
    }
    printf("%d\n", maxLen);
    return 0;
}