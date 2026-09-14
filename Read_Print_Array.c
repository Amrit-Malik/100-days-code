// Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>
int main()
{
    int rows, colms;
    printf("Enter rows and columns: ");
    scanf("%d %d",&rows, &colms);
    int matrix[rows][colms];
    printf("Enter matrix elements:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<colms; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<colms; j++)
        {
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}