//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include<stdio.h>
int main()
{
    int num, digit, count[10] = {0}, maxDigit = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for(i = 0; i < 10; i++)
    {
        if(count[i] > count[maxDigit])
        {
            maxDigit = i;
        }
    }
    printf("Digit that occurs most: %d\n", maxDigit);
    return 0;
}