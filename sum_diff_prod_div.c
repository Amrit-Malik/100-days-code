//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
/*Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2*/
#include<stdio.h>
int main()
{
    int a,b,sum,difference,product,division;
    printf("Enter 1st number\n"); //Please enter 1st number > 2nd number
    scanf("%d",&a);
    printf("Enter 2nd number\n"); //Please enter 1st number > 2nd number
    scanf("%d",&b);
    sum = a+b;
    difference = a-b;
    product = a*b;
    division = a/b;
    printf("Sum of two numbers is : %d\n",sum);
    printf("Difference of two numbers is : %d\n",difference);
    printf("Product of two numbers is : %d\n",product);
    printf("Quotient after dividing two numbers is : %d\n",division);
    return 0;
}
