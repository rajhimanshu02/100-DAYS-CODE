/*Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main() 
{
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int largest, second_largest;
    
    if (arr[0] > arr[1])
     {
        largest = arr[0];
        second_largest = arr[1];
    } 
    else
     {
        largest = arr[1];
        second_largest = arr[0];
    }

    for (i = 2; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            second_largest = largest;
            largest = arr[i];
        }
         else if (arr[i] > second_largest && arr[i] < largest)
          {
            second_largest = arr[i];
        }
    }

    printf("The second largest element is: %d\n", second_largest);

    return 0;
}
