//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant
*/
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel\n");
    }
    else if ((ch >= 'a' && ch <= 'z'))
    {
        printf("Consonant\n");
    }
    else
    {
        printf("Not an alphabet\n");
    }
    return 0;
}
