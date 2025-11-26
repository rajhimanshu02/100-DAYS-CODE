/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int A[m][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Diagonal Traversal:\n");

    for (int col = 0; col < n; col++) {
        int i = 0, j = col;
        while (i < m && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
    }

    for (int row = 1; row < m; row++) {
        int i = row, j = n - 1;
        while (i < m && j >= 0) {
            printf("%d ", A[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
