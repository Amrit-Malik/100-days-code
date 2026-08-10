//Q1: Write a program to input two numbers and display their sum.
/*Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19*/
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter 1st number\n");
    scanf("%d",&a);
    printf("Enter 2nd number\n");
    scanf("%d",&b);
    sum = a+b;
    printf("Sum of two numbers is :%d \n",sum);
    return 0;
}