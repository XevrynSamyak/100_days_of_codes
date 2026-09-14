/*
Day 10 - Question 19

Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Input:
A single line with three integers: the three side lengths of the triangle.

Output:
A single line containing Equilateral, Isosceles or Scalene.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
3 3 3

Sample Output 1:
Equilateral

Sample Input 2:
3 3 4

Sample Output 2:
Isosceles

Sample Input 3:
2 3 4

Sample Output 3:
Scalene
*/

#include <stdio.h>

int main()
{
    int sideA, sideB, sideC;

    scanf("%d %d %d", &sideA, &sideB, &sideC);

    if (sideA == sideB && sideB == sideC)
        printf("Equilateral\n");
    else if (sideA == sideB || sideB == sideC || sideA == sideC)
        printf("Isosceles\n");
    else
        printf("Scalene\n");

    return 0;
}
