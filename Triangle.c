//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first side of triangle\n");
    scanf("%d",&a);
    printf("Enter second side of triangle\n");
    scanf("%d",&b);
    printf("Enter third side of triangle\n");
    scanf("%d",&c);
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        printf("Triangle is valid\n");
        if((a==b) && (b==c))
        {
            printf("Equilateral Triangle\n");
        }
        else if((a==b) || (a==c) || (b==c))
        {
            printf("Isosceles Triangle\n");
        }
        else if((a!=b) && (b!=c) && (a!=c))
        {
            printf("Scalene Triangle\n");
        }
    }
    else
    {
        printf("Triangle is invalid");
    }
    return 0;
}