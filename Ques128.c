/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Case:
Input:
File: text.txt (Content: Welcome to C language)
Output:
Vowels: 8
Consonants: 10
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {   // Check if alphabet
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}