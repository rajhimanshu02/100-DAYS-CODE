/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;
            if (str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("The longest word in the given sentence is: %s", longest);
    return 0;
}
