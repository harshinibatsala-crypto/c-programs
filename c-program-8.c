#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, si, ci;

    printf("Enter principle value: ");
    scanf("%f", &principle);

    printf("Enter rate value: ");
    scanf("%f", &rate);

    printf("Enter time (in years) value: ");
    scanf("%f", &time);

    si = (principle * rate * time) / 100;
    ci = principle * (pow((1 + rate / 100), time)) - principle;

    printf("Simple Interest is: %f\n", si);
    printf("Compound Interest is: %f\n", ci);

    return 0;
}
