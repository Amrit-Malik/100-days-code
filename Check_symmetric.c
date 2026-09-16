// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main() 
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int symmetric = 1; 
    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            if(a[i][j] != a[j][i]) 
            {
                symmetric = 0;
                break;
            }
        }
        if(symmetric == 0) break;
    }
    if(symmetric == 1)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}