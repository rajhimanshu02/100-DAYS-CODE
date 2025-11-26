/*Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 3

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTopper(struct Student students[], int count) {
    int i;
    int topper_index = 0;

    for (i = 1; i < count; i++) {
        if (students[i].marks > students[topper_index].marks) {
            topper_index = i;
        }
    }
    return students[topper_index];
}

int main() {
    struct Student students[MAX_STUDENTS];
    struct Student topper;
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

    topper = findTopper(students, MAX_STUDENTS);

    printf("\nTop Student: %s | Roll: %d | Marks: %.0f\n", 
           topper.name, 
           topper.roll_no, 
           topper.marks);

    return 0;
}