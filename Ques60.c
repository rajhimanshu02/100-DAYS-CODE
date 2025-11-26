/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>

int main() {
    int n, i, positive , negative , zero ;
    positive = 0;
    negative = 0;
    zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("elements which are positive = %d\n" , positive);
    printf("elements which are negative = %d\n" , negative);
    printf("elements which are zero = %d\n" , zero);




    return 0;
}
