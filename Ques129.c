/*Q129: A file numbers.txt contains a list of integers separated by spaces. 
Read all integers, compute their sum and average, and print both.

Sample Test Case:
Input:
File: numbers.txt (Content: 10 20 30 40 50)
Output:
Sum = 150
Average = 30.00
*/

#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in file.\n");
        return 0;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);

    return 0;
}
