/*
Q147:
Store employee data in a binary file using fwrite() and read using fread().

Sample Test Case:
Input:
Employee details entered and stored in file.
Output:
Displays employee data read from file.
*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    printf("Enter name: ");
    scanf("%s", e.name);
    printf("Enter ID: ");
    scanf("%d", &e.id);
    printf("Enter salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    fread(&e_read, sizeof(e_read), 1, fp);
    fclose(fp);

    printf("\nEmployee Details Read from File:\n");
    printf("Name: %s\n", e_read.name);
    printf("ID: %d\n", e_read.id);
    printf("Salary: %.2f\n", e_read.salary);

    return 0;
}
