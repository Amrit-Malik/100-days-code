// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max1 = arr[0], max2 = -1;
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    printf("Second largest element is: %d\n", max2);
    return 0;
}