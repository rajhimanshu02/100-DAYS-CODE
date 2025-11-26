/* Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int A[m][n];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Diagonal Traversal:\n");
    for (int k = 0; k < m + n - 1; k++) {
        if (k % 2 == 0) {
            i = (k < m) ? k : m - 1;
            j = k - i;
            while (i >= 0 && j < n) {
                printf("%d ", A[i][j]);
                i--;
                j++;
            }
        } else {
            j = (k < n) ? k : n - 1;
            i = k - j;
            while (j >= 0 && i < m) {
                printf("%d ", A[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}
