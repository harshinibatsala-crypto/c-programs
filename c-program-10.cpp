#include <stdio.h>
#include <math.h>

#define PI 3.14  // No use of '=', ';', or small letters in macro name

int main()
{
    float r, area;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = PI * pow(r, 2);

    printf("Area of the circle: %.2f\n", area);

    return 0;
}
