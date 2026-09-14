/*
Day 13 - Question 25

Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Input:
A single line with two integers followed by the operator character,
for example: 4 2 +

Output:
A single line with the result of applying the operator to the two numbers.

Constraints:
No constraints are stated on the challenge website.

Sample Input 1:
4 2 +

Sample Output 1:
6

Sample Input 2:
10 3 %

Sample Output 2:
1

Sample Input 3:
15 5 /

Sample Output 3:
3
*/

#include <stdio.h>

int main()
{
    int first, second;
    char operator;

    scanf("%d %d %c", &first, &second, &operator);

    switch (operator)
    {
        case '+':
            printf("%d\n", first + second);
            break;
        case '-':
            printf("%d\n", first - second);
            break;
        case '*':
            printf("%d\n", first * second);
            break;
        case '/':
            if (second == 0)
                printf("Cannot divide by zero\n");
            else
                printf("%g\n", (double) first / second);
            break;
        case '%':
            if (second == 0)
                printf("Cannot divide by zero\n");
            else
                printf("%d\n", first % second);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
