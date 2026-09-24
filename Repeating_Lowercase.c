// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
int main() 
{
    char str[100];
    int freq[26] = {0}; 
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) 
            {
                printf("Output: %c\n", str[i]);
                return 0;
            }
        }
    }
    printf("Output: No repeating lowercase alphabet\n");
    return 0;
}