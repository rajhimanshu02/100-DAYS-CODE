/*
Q140:
Define a struct with enum Gender and print person's gender.

Sample Test Case:
Input:
Gender = MALE
Output:
Male
*/

#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    p.gender = MALE;

    if (p.gender == MALE)
        printf("Male\n");
    else if (p.gender == FEMALE)
        printf("Female\n");
    else
        printf("Other\n");

    return 0;
}
