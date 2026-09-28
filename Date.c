// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
int main() 
{
    int day, year;
    printf("Enter date in format dd/04/yyyy: ");
    scanf("%d/04/%d", &day, &year);
    printf("%d-Apr-%d\n", day, year);   
    return 0;
}