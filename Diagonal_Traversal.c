// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main() 
{
    int r, c;
    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &r, &c);
    int mat[100][100];
    printf("Enter matrix elements: \n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    int result[10000];
    int idx = 0;
    for (int d = 0; d <= r + c - 2; d++) 
    {
        int rowStart = (d < c) ? 0 : d - c + 1;
        int rowEnd = (d < r) ? d : r - 1;
        if (d % 2 == 0) 
        {
            for (int i = rowEnd; i >= rowStart; i--) {
                int j = d - i;
                result[idx++] = mat[i][j];
            }
        } else 
        {
            for (int i = rowStart; i <= rowEnd; i++) {
                int j = d - i;
                result[idx++] = mat[i][j];
            }
        }
    }

    printf("Diagonal traversal: ");
    for (int i = 0; i < idx; i++)
        printf("%d ", result[i]);
    printf("\n");
    return 0;
}