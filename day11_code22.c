/*
Day 11 - Question 22

Write a program to find profit or loss percentage given cost price and selling price.

Input:
A single line with two numbers: the cost price and the selling price.

Output:
A single line: Profit <percentage>%, Loss <percentage>%, or No Profit No Loss

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
1000 1200

Sample Output 1:
Profit 20%

Sample Input 2:
1000 800

Sample Output 2:
Loss 20%

Sample Input 3:
1000 1000

Sample Output 3:
No Profit No Loss
*/

#include <stdio.h>

int main()
{
    double costPrice, sellingPrice, percentage;

    scanf("%lf %lf", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice)
    {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %g%%\n", percentage);
    }
    else if (sellingPrice < costPrice)
    {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %g%%\n", percentage);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}
