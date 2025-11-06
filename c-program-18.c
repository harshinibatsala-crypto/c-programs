#include <stdio.h>
int main()
{
    float units, amount, charges, total;
    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        amount = units * 2;
        charges = 25;
    }
    else if (units <= 100) {
        amount = units * 3.0;
        charges = 50;
    }
    else if (units <= 150) {
        amount = units * 4.0;
        charges = 75;
    }
    else if (units <= 200) {
        amount = units * 5.0;
        charges = 100;
    }
    else {
        amount = units * 8;
        charges = 125;
    }

    total = amount + charges;
    printf("Your total amount is: %.2f", total);

    return 0;
}
