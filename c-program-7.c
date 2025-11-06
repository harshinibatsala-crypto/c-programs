#include <stdio.h>

int main()
{
    float u, a, d;
    int t;

    printf("Enter initial velocity value: ");
    scanf("%f", &u);

    printf("Enter acceleration value: ");
    scanf("%f", &a);

    printf("Enter time taken: ");
    scanf("%d", &t);

    d = (u * t) + (a * t * t) / 2;

    printf("The distance is: %f", d);

    return 0;
}
