/*Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/

#include <stdio.h>

#define MAX_STUDENTS 3

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int i;
    int topper_index = 0;

    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("--- Enter details for Student %d ---\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    for (i = 1; i < MAX_STUDENTS; i++) {
        if (students[i].marks > students[topper_index].marks) {
            topper_index = i;
        }
    }

    printf("\nTopper: %s (Marks: %.0f)\n", 
           students[topper_index].name, 
           students[topper_index].marks);

    return 0;
}