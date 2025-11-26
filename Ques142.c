/*Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details
*/

#include <stdio.h>

#define MAX_STUDENTS 5

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int i;

    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("--- Enter details for Student %d ---\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Details ---\n");
    printf("| %-15s | %-10s | %-10s |\n", "Name", "Roll No", "Marks");
    printf("--------------------------------------------\n");

    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("| %-15s | %-10d | %-10.2f |\n", 
               students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}