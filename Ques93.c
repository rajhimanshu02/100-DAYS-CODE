/*Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200];
    int freq1[26] = {0}, freq2[26] = {0}, i, isAnagram = 1;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    if (str1[strlen(str1) - 1] == '\n')
        str1[strlen(str1) - 1] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    if (str2[strlen(str2) - 1] == '\n')
        str2[strlen(str2) - 1] = '\0';

    if (strlen(str1) != strlen(str2)) {
        printf("The given strings are not anagrams.");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            freq1[str1[i] - 'A']++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i] - 'a']++;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            freq2[str2[i] - 'A']++;
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The given strings are anagrams.");
    else
        printf("The given strings are not anagrams.");

    return 0;
}
