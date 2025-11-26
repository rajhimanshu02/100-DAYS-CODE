/*Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], ch;
    int i, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    printf("Enter the character to find its frequency: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }
    printf("The frequency of '%c' in the given string is: %d", ch, count);
    return 0;
}
