/*
Q137:
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Case:
Input:
GUEST
Output:
Welcome Guest!
*/

#include <stdio.h>
#include <string.h>

int main() {
    enum Role { ADMIN, USER, GUEST };
    char input[20];
    scanf("%s", input);

    enum Role r;

    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else
        r = GUEST;

    switch (r) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
