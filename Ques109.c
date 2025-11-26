/*Q109: Write a program to take an integer array arr and an integer k as inputs. 
Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr = [100, 200, 300, 400], k = 2
Output 1:
700

Input 2:
arr = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
Output 2:
39

Input 3:
arr = [100, 200, 300, 400], k = 1
Output 3:
400

*/

#include <stdio.h>

int main() {
    int n, k, i, j, currentSum, maxSum;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of subarray (k): ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.");
        return 0;
    }

    maxSum = -1000000;

    for (i = 0; i <= n - k; i++) {
        currentSum = 0;
        for (j = i; j < i + k; j++) {
            currentSum += arr[j];
        }
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("The maximum sum of all subarrays of size %d is: %d", k, maxSum);

    return 0;
}
