// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    int marks;
};
int main()
{
    int n, i, topIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Name, Roll Number and Marks for Student %d: ", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
        if(s[i].marks > s[topIndex].marks)
        {
            topIndex = i;
        }
    }
    printf("\nTopper: %s (Marks: %d)\n",
           s[topIndex].name,
           s[topIndex].marks);
    return 0;
}