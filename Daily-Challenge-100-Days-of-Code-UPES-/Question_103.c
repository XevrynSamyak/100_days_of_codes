
#include <stdio.h>

int main()
{
    int nums[30];
    int n, i;
    int totalSum = 0, leftSum = 0;
    int pivotIndex = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum += nums[i]; 
    }

    for (i = 0; i < n; i++)
    {
        if (leftSum == totalSum - leftSum - nums[i])
        {
            pivotIndex = i;  // Found leftmost pivot
            break;
        }
        leftSum += nums[i]; // Add current element to left sum for next iteration
    }

    printf("%d", pivotIndex);
    return 0;
}

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/
