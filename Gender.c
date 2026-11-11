// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>
enum Gender
{
    MALE,
    FEMALE
};
struct Person
{
    enum Gender gender;
};
int main()
{
    struct Person p;
    char g[10];
    printf("Enter Gender (MALE/FEMALE): ");
    scanf("%s", g);
    if (strcmp(g, "MALE") == 0)
        p.gender = MALE;
    else
        p.gender = FEMALE;
    if (p.gender == MALE)
        printf("Male");
    else
        printf("Female");
    return 0;
}