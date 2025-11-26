/*Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, freq[26] = {0}, found = 0;
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                printf("The first repeating lowercase alphabet is: %c", str[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found)
        printf("No repeating lowercase alphabet found in the string.");
    return 0;
}
