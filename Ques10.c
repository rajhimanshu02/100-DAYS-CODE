/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main(){
   int second , H , M , S;
    printf("enter time in seconds:\n");
    scanf("%d" , &second);
     
    H = second / 3600;
    M = second % 3600 / 60;
    S = second % 60;

    printf("time is :\n %d : %d : %d" , H , M , S );
    return 0;
}