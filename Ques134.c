/*
Q134:
Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Case:
Input:
FAILURE
Output:
Operation failed
*/

#include <stdio.h>

int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status s;

    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    int x;
    scanf("%d", &x);

    s = x;

    switch (s) {
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
        default: printf("Invalid status\n");
    }

    return 0;
}
