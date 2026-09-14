/*
Day 12 - Question 23

Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Input:
A single line with one integer: the number of late days.

Output:
A single line: Fine ₹<fine>, or Membership Cancelled

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
4

Sample Output 1:
Fine ₹8

Sample Input 2:
8

Sample Output 2:
Fine ₹22

Sample Input 3:
15

Sample Output 3:
Fine ₹60

Sample Input 4:
31

Sample Output 4:
Membership Cancelled
*/

#include <stdio.h>

int main()
{
    int lateDays, fine;

    scanf("%d", &lateDays);

    if (lateDays > 30)
    {
        printf("Membership Cancelled\n");
        return 0;
    }

    if (lateDays <= 5)
        fine = lateDays * 2;
    else if (lateDays <= 10)
        fine = 5 * 2 + (lateDays - 5) * 4;
    else
        fine = 5 * 2 + 5 * 4 + (lateDays - 10) * 6;

    printf("Fine ₹%d\n", fine);

    return 0;
}
