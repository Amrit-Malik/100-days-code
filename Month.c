// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>
enum Months
{
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};
int main()
{
    char month[10];
    printf("Enter month (JAN-FEB-...-DEC): ");
    scanf("%s", month);
    if (strcmp(month, "JAN") == 0)
        printf("JAN : 31 days\n");
    else if (strcmp(month, "FEB") == 0)
        printf("FEB : 28 or 29 days\n");
    else if (strcmp(month, "MAR") == 0)
        printf("MAR : 31 days\n");
    else if (strcmp(month, "APR") == 0)
        printf("APR : 30 days\n");
    else if (strcmp(month, "MAY") == 0)
        printf("MAY : 31 days\n");
    else if (strcmp(month, "JUN") == 0)
        printf("JUN : 30 days\n");
    else if (strcmp(month, "JUL") == 0)
        printf("JUL : 31 days\n");
    else if (strcmp(month, "AUG") == 0)
        printf("AUG : 31 days\n");
    else if (strcmp(month, "SEP") == 0)
        printf("SEP : 30 days\n");
    else if (strcmp(month, "OCT") == 0)
        printf("OCT : 31 days\n");
    else if (strcmp(month, "NOV") == 0)
        printf("NOV : 30 days\n");
    else if (strcmp(month, "DEC") == 0)
        printf("DEC : 31 days\n");
    else
        printf("Invalid month\n");
    return 0;
}