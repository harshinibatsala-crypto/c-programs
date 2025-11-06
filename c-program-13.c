#include <stdio.h>
#include <math.h>

int main()
{
    float side, area;

    printf("Enter side value: ");
    scanf("%f", &side);

    area = pow(side, 2);

    printf("Area of the square is: %.2f", area);

    return 0;
}
