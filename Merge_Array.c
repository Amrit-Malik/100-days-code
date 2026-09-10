// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
    int n1, n2, i;
    printf("Enter size of first array: \n");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: \n");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[n1 + n2];
    for(i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for(i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}