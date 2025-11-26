/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main(){
    int first , last , middle , num , digits , a , swapped , place=1;
    printf("enter number\n");
    scanf("%d", &num);

    a = num;
    digits = 0;

    while (a>0)
    {
        a = a / 10;
        digits++ ;
    }

    for(int i=1; i<=digits-1; i++){
        place = place * 10;
    }

    last = num % 10;
    first = num / place;
    middle = (num % place) / 10;
  
    swapped = (last * place) + (middle * 10) + first;
  
    printf("%d", swapped);
    return 0;
}
