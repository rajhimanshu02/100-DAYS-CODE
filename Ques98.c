/*Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i, len;
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);
    if (name[strlen(name) - 1] == '\n')
        name[strlen(name) - 1] = '\0';
    len = strlen(name);

    printf("The formatted name is: ");
    printf("%c.", name[0]);

    for (i = 1; i < len; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ') {
            if (strchr(name + i + 1, ' ') != NULL)
                printf("%c.", name[i + 1]);
            else {
                printf(" %s", name + i + 1);
                break;
            }
        }
    }
    return 0;
}
