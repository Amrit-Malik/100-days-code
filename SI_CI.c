//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,amount,ci;
    printf("Enter Principal\n");
    scanf("%f",&p);
    printf("Enter Rate\n");
    scanf("%f",&r);
    printf("Enter Time in years\n");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("Simple interest is :%f\n",si);
    amount = p*pow((1+r/100),t);
    ci = amount - p;
    printf("Compund interest is :%f\n",ci);
    return 0;
}
