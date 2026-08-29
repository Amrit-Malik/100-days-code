//Q39: Write a program to find the product of odd digits of a number.
/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/
#include <stdio.h>
int main() 
{
    int n, prod = 1, digit, found = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int arr[10], k = 0;
    while(n > 0) 
    {
        digit = n % 10;
        if(digit % 2 == 1) 
        {
            prod *= digit;
            arr[k++] = digit;
            found = 1;
        }
        n /= 10;
    }
    if(found == 0) 
    {
        printf("1 (1)");
    } else {
        printf("%d (", prod);
        for(int i = k-1; i >= 0; i--) 
        {
            printf("%d", arr[i]);
            if(i > 0) printf("*");
        }
        printf(")");
    }
    return 0;
}
