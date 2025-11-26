/*Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], temp[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    k = k % n;

    for (int i = 0; i < k; i++)
        temp[i] = arr[n - k + i];

    for (int i = n - 1; i >= k; i--)
        arr[i] = arr[i - k];

    for (int i = 0; i < k; i++)
        arr[i] = temp[i];

    printf("Array after rotating right by %d positions:\n", k);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
