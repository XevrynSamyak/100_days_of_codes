#include <stdio.h>

int main()
{
    double celsius, fahrenheit;

    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("Fahrenheit=%g\n", fahrenheit);

    return 0;
}
