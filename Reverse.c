//Q30: Write a program to reverse a given number.
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/
#include<stdio.h>
int main()
{
    int num , rev =0 , r;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for (;num!=0 ; num = num/10)
    {
        r = num%10;
        rev = rev * 10 +r;
    }
    printf("Reversed number = %d", rev);
    return 0;
}