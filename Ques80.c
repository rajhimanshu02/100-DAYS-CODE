/*Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k, totalA, totalB;

    printf("Enter total number of elements in Matrix A: ");
    scanf("%d", &totalA);
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);

    if (m * n != totalA) {
        printf("Invalid input! Rows x Columns must equal total elements.\n");
        return 0;
    }

    int A[m][n];
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter total number of elements in Matrix B: ");
    scanf("%d", &totalB);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);

    if (p * q != totalB) {
        printf("Invalid input! Rows x Columns must equal total elements.\n");
        return 0;
    }

    int B[p][q];
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    if (n != p) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int C[m][q];
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("Resultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%4d", C[i][j]);
        printf("\n");
    }

    return 0;
}
