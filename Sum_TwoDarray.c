// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>
int main()
{
    int rows, colms, sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &colms);
    int matrix[rows][colms];
    printf("Enter matrix elements:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<colms; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("Sum of all elements = %d", sum);
    return 0;
}