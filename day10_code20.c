/*
Day 10 - Question 20

Write a program to display the day of the week based on a number (1–7) using switch-case.

Input:
A single line with one integer from 1 to 7.

Output:
A single line with the name of the day (Monday ... Sunday).

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
1

Sample Output 1:
Monday

Sample Input 2:
5

Sample Output 2:
Friday
*/

#include <stdio.h>

int main()
{
    int day;

    scanf("%d", &day);

    switch (day)
    {
        case 1: printf("Monday\n");    break;
        case 2: printf("Tuesday\n");   break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n");  break;
        case 5: printf("Friday\n");    break;
        case 6: printf("Saturday\n");  break;
        case 7: printf("Sunday\n");    break;
        default: printf("Invalid day number\n"); break;
    }

    return 0;
}
