#include <stdio.h>

#define PI 3.14159265358979323846

int main()
{
    double radius, area, circumference;

    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
