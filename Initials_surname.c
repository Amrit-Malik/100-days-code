// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char name[100];
    int i, len;
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    len = strlen(name);
    if (name[0] != ' ' && name[0] != '\n')
    {
        printf("%c.", name[0]);
    }
    for (i = 0; i < len; i++) 
    {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ' && name[i+1] != '\n') 
        {
            int j = i + 1;
            while (name[j] != ' ' && name[j] != '\0' && name[j] != '\n') 
            {
                j++;
            }
            if (j == len - 1 || name[j] == '\0' || name[j] == '\n') 
            {
                printf(" %s", &name[i+1]);
                break;
            } 
            else 
            {
                printf("%c.", name[i+1]);
            }
        }
    }
    return 0;
}