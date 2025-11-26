/*Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

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

    printf("The initials are: ");
    printf("%c.", name[0]);

    for (i = 1; i < len; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ')
            printf("%c.", name[i + 1]);
    }
    return 0;
}
