// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
int main() 
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int distinct = 1;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = i + 1; j < rows; j++) 
        {
            if (matrix[i][i] == matrix[j][j]) 
            {
                distinct = 0;
                break;
            }
        }
        if (distinct == 0) break;
    }
    if (distinct == 1)
        printf("Diagonal elements are distinct : True\n");
    else
       printf("Diagonal elements are not distinct : False\n");
    return 0;
}