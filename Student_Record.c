// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

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
    FILE *fp;
    struct Student s;
    int n, i;
    fp = fopen("students.txt", "w");
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter Name: ");
        scanf("%s", s.name);
        printf("Enter Roll Number: ");
        scanf("%d", &s.roll);
        printf("Enter Marks: ");
        scanf("%d", &s.marks);
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    printf("\nStudent Records:\n");
    while(fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) != EOF)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               s.name, s.roll, s.marks);
    }
    fclose(fp);
    return 0;
}