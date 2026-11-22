// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include<stdio.h>

int main()
{
    int i=0,n,x;
    int arr[30];
    int ceil_of_x=-1;

    printf("Enter the number of Element you want to enter:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target:");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(arr[i]>=x)
        {
            if(ceil_of_x==-1)
            {
                ceil_of_x=i;
                break;
            }
        }
    }
    printf("%d",ceil_of_x);
    return 0;
}
