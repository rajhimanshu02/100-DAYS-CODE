/*Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200], temp[400];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    if (str1[strlen(str1) - 1] == '\n')
        str1[strlen(str1) - 1] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    if (str2[strlen(str2) - 1] == '\n')
        str2[strlen(str2) - 1] = '\0';

    if (strlen(str1) != strlen(str2)) {
        printf("The given strings are not rotations of each other.");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL)
        printf("The given strings are rotations of each other.");
    else
        printf("The given strings are not rotations of each other.");

    return 0;
}
