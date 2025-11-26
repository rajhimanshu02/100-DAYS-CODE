/*Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, i;
    printf("Enter string:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    if (str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    return 0;
}
