// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    int i;
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    if (name[0] != ' ' && name[0] != '\n')
    {
        printf("%c.", name[0]);
    }
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ' && name[i+1] != '\n')
        {
            printf("%c.", name[i+1]);
        }
    }
    return 0;
}