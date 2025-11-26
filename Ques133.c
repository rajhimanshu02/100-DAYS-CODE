/*
Q133:
Create an enum for months and print how many days each month has.

Sample Test Case:
Input:
FEB
Output:
28 or 29 days
*/

#include <stdio.h>

int main() {
    enum Months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
    enum Months m;

    printf("Enter month (1-12): ");
    int x;
    scanf("%d", &x);

    m = x;

    switch (m) {
        case JAN: printf("31 days\n"); break;
        case FEB: printf("28 or 29 days\n"); break;
        case MAR: printf("31 days\n"); break;
        case APR: printf("30 days\n"); break;
        case MAY: printf("31 days\n"); break;
        case JUN: printf("30 days\n"); break;
        case JUL: printf("31 days\n"); break;
        case AUG: printf("31 days\n"); break;
        case SEP: printf("30 days\n"); break;
        case OCT: printf("31 days\n"); break;
        case NOV: printf("30 days\n"); break;
        case DEC: printf("31 days\n"); break;
        default:  printf("Invalid month!\n"); break;
    }

    return 0;
}
