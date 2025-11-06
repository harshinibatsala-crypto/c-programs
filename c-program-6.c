#include <stdio.h>

int test()
{
    float celsius, fahrenheit;

    printf("\nEnter fahrenheit value: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Celsius value is = %f", celsius);

    return 0;
}

int main()
{
    float celsius, fahrenheit;

    printf("Enter celsius value: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9 / 5 + 32;

    printf("Fahrenheit value is = %f", fahrenheit);

    test();

    return 0;
}
