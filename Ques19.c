/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter first side of the triangle :\n");
    scanf("%d", &a);

    printf("enter second side of the triangle :\n");
    scanf("%d", &b);

    printf("enter third side of the triangle :\n");
    scanf("%d", &c);

    if (a + b > c && b + c > a && c + a > b)
    {
        printf("the triangle is valid \n");

        if (a == b && b == c)
        {
            printf("it is an equilateral triangle\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("it is an isosceles triangle\n");
        }

        else
        {
            printf("it is a scalene triangle\n");
        }
    }
    else
    {
        printf("the triangle is not valid");
    }
    return 0;
}