/*
Day 11 - Question 21

Write a program to display the month name and number of days using switch-case for a given month number.

Input:
A single line with one integer from 1 to 12.

Output:
A single line: <Month name>, <number of days> days

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
2

Sample Output 1:
February, 28 days

Sample Input 2:
12

Sample Output 2:
December, 31 days
*/

#include <stdio.h>

int main()
{
    int month;

    scanf("%d", &month);

    switch (month)
    {
        case 1:  printf("January, 31 days\n");   break;
        case 2:  printf("February, 28 days\n");  break;
        case 3:  printf("March, 31 days\n");     break;
        case 4:  printf("April, 30 days\n");     break;
        case 5:  printf("May, 31 days\n");       break;
        case 6:  printf("June, 30 days\n");      break;
        case 7:  printf("July, 31 days\n");      break;
        case 8:  printf("August, 31 days\n");    break;
        case 9:  printf("September, 30 days\n"); break;
        case 10: printf("October, 31 days\n");   break;
        case 11: printf("November, 30 days\n");  break;
        case 12: printf("December, 31 days\n");  break;
        default: printf("Invalid month number\n"); break;
    }

    return 0;
}
