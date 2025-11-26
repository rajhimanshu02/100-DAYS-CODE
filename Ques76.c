/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, rows, cols;
    int i, j;
    bool isSymmetric = true;

    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter number of rows:");
    scanf("%d", &rows);
    printf("enter number of coloumns:");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    if (rows * cols != n) {
        printf("Error\n");
        return 1;
    }

    int matrix[rows][cols];

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    if(isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
