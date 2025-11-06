#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, D;
    float RP, IP;
    float P1, P2;

    printf("Enter coeff of a, b, c:");
    scanf("%d %d %d", &a, &b, &c);

    D = (b * b - 4 * a * c);
    printf("D = %d\n", D);

    if (D > 0) {
        P1 = (-b + sqrt(D)) / (2 * a);
        P2 = (-b - sqrt(D)) / (2 * a);
        printf("The roots are real and distinct %0.1f and %0.1f\n", P1, P2);
    } else if (D == 0) {
        P1 = -b / (2 * a);
        P2 = -b / (2 * a);
        printf("The roots are real and equal %0.1f and %0.1f\n", P1, P2);
    } else {
        RP = -b / (2 * a);
        IP = sqrt(-D) / (2 * a);
        printf("The imaginary roots P1 = %0.2f + i %0.2f and P2 = %0.2f - i %0.2f\n", RP, IP, RP, IP);
    }

    return 0;
}
