#include <stdio.h>

int main()
{
    float length,breadth, area;

    printf("Enter length and breadth values: ");
    scanf("%f %f", &length, &breadth);

    area = (length * breadth);

    printf("Area of the rectangle is: %.2f\n", area);

    return 0;
}
