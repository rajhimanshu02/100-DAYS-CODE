/*
Q136:
Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Case:
Input:
ADD 10 20
Output:
30
*/

#include <stdio.h>
#include <string.h>

int main() {
    enum Operation { ADD, SUBTRACT, MULTIPLY };
    char op[20];
    int a, b;

    scanf("%s %d %d", op, &a, &b);

    enum Operation choice;

    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else
        choice = MULTIPLY;

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
