/*Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, len;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') 
        str[strlen(str) - 1] = '\0';
    len = strlen(str);
    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}

