/*Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main() {
    int n1, rows1, cols1;
    int n2, rows2, cols2;
    int i, j;

    printf("Enter number of elements in first matrix: ");
    scanf("%d", &n1);

    printf("Enter number of rows of first matrix: ");
    scanf("%d", &rows1);

    printf("Enter number of columns of first matrix: ");
    scanf("%d", &cols1);

    if (rows1 * cols1 != n1) {
        printf("Error: Number of elements does not match rows*columns for first matrix.\n");
        return 1;
    }

    int matrix1[rows1][cols1];

    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter number of elements in second matrix: ");
    scanf("%d", &n2);

    printf("Enter number of rows of second matrix: ");
    scanf("%d", &rows2);

    printf("Enter number of columns of second matrix: ");
    scanf("%d", &cols2);

    if (rows2 * cols2 != n2) {
        printf("Error: Number of elements does not match rows*columns for second matrix.\n");
        return 1;
    }

    if (rows1 != rows2 || cols1 != cols2) {
        printf("Error: Matrices dimensions do not match for addition.\n");
        return 1;
    }

    int matrix2[rows2][cols2];
    int sumMatrix[rows1][cols1];

    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
