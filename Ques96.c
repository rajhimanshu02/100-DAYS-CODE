/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverseWord(char *word) {
    int i, j;
    char temp;
    j = strlen(word) - 1;
    for (i = 0; i < j; i++, j--) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
}

int main() {
    char str[200], word[50];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    printf("The sentence after reversing each word is: ");

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';
            reverseWord(word);
            printf("%s", word);
            if (str[i] == ' ')
                printf(" ");
            j = 0;
            if (str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    return 0;
}
