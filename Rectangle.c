//Q3 : Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20
*/
#include<stdio.h>
int main()
{
    float l,b,p,a;
    printf("Enter length of rectangle");
    scanf("%f",&l);
    printf("Enter breadth of the rectangle");
    scanf("%f",&b);
    p = 2*(l+b);
    a = l*b;
    printf ("perimeter of the rectangle is %f \n",p);
    printf ("area of the rectangle is %f \n",a);
    return 0;
}