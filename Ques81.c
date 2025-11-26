/*Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int main() 
{
    printf("Enter a string: ");
    char s[1000];
    if (fgets(s, sizeof(s), stdin) == NULL) return 0;
    int count = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        count++;
    printf("%d", count);
    return 0;
}
