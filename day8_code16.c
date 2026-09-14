/*
Day 8 - Question 16

Write a program to input three numbers and find the largest among them using if–else.

Input:
A single line with three integers separated by spaces.

Output:
A single line: Largest is <largest of the three numbers>

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
3 7 5

Sample Output 1:
Largest is 7

Sample Input 2:
-1 -5 0

Sample Output 2:
Largest is 0
*/

#include <stdio.h>

int main()
{
    int first, second, third, largest;

    scanf("%d %d %d", &first, &second, &third);

    if (first >= second && first >= third)
        largest = first;
    else if (second >= first && second >= third)
        largest = second;
    else
        largest = third;

    printf("Largest is %d\n", largest);

    return 0;
}
