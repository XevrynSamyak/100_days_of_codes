/*
Day 12 - Question 24

Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Input:
A single line with one integer: the number of units consumed.

Output:
A single line: Bill: ₹<amount>

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
50

Sample Output 1:
Bill: ₹250

Sample Input 2:
150

Sample Output 2:
Bill: ₹850

Sample Input 3:
250

Sample Output 3:
Bill: ₹1700
*/

#include <stdio.h>

int main()
{
    int units, bill;

    scanf("%d", &units);

    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = 100 * 5 + (units - 100) * 7;
    else if (units <= 300)
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    else
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;

    printf("Bill: ₹%d\n", bill);

    return 0;
}
