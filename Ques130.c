/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record.

Sample Test Case:
Input:
Student 1 → Name: Asha, Roll: 101, Marks: 85
Student 2 → Name: Ravi, Roll: 102, Marks: 92

Output:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/

#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll, marks;
    char name[50];

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        // Writing to file
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // Reading and displaying
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStored Student Records:\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
