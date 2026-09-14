#include <stdio.h>
#include <math.h>

int main()
{
    double principal, rate, time, simpleInterest, amount, compoundInterest;

    scanf("%lf %lf %lf", &principal, &rate, &time);

    simpleInterest = (principal * rate * time) / 100.0;

    amount = principal * pow(1.0 + rate / 100.0, time);
    compoundInterest = amount - principal;

    printf("Simple Interest=%g, Compound Interest=%g\n", simpleInterest, compoundInterest);

    return 0;
}
