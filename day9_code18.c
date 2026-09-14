/*
Day 9 - Question 18

Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

Input:
A single line with one integer: the percentage (0-100).

Output:
A single line: Grade A, Grade B, Grade C, Grade D or Grade F

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
95

Sample Output 1:
Grade A

Sample Input 2:
82

Sample Output 2:
Grade B

Sample Input 3:
68

Sample Output 3:
Grade D

Sample Input 4:
50

Sample Output 4:
Grade F
*/

#include <stdio.h>

int main()
{
    int percentage;

    scanf("%d", &percentage);

    if (percentage >= 90)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}
