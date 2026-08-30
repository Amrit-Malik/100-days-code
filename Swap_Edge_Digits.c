//Q41: Write a program to swap the first and last digit of a number.
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num, first, last, digits, pow10, middle, result;
    printf("Enter a number:\n");
    scanf("%d", &num);
    last = num % 10;
    digits = (int)log10(num) + 1;
    first = num / (int)pow(10, digits - 1);
    if (digits == 1)
    {
        result = num;
    }
    else{
        pow10 = (int)pow(10, digits - 1);
        middle = (num % pow10) / 10;
        result = last * pow10 +middle * 10 + first;
    }
    printf("After swapping : %d\n", result);
    return 0;
}