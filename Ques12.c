/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    
    if (n != 0)
        {
            if (n > 0)
            {
                printf("the given number is positive");
            }
            else 
              {
                printf("the given number is negative");
                } 
            }
     else
         {
            printf("the given number is zero");
        }     
          return 0;
}