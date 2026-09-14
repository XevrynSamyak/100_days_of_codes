/*
Day 9 - Question 17

Write a program to find the roots of a quadratic equation and categorize them.

Input:
A single line with three numbers a, b and c: the coefficients of ax^2 + bx + c = 0.

Output:
One of these lines, depending on the discriminant b*b - 4*a*c:
Roots are real and different: <root1>, <root2>
Roots are real and same: <root>
Roots are complex

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
1 -3 2

Sample Output 1:
Roots are real and different: 2, 1

Sample Input 2:
1 -2 1

Sample Output 2:
Roots are real and same: 1

Sample Input 3:
1 2 5

Sample Output 3:
Roots are complex
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, root1, root2;

    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %g, %g\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %g\n", root1);
    }
    else
    {
        printf("Roots are complex\n");
    }

    return 0;
}
