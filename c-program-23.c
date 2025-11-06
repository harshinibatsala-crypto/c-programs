#include <stdio.h>
int main() {
    int n, i = 0;

    printf("Enter n value: ");
    scanf("%d", &n);

    // Loop from a = 1 up to n
    for (int a = 1; a <= n; a++) {
        // Check if 'a' is a divisor of 'n'
        if (n % a == 0) {
            // Increment the counter 'i' for every divisor found
            i++;
        }
    }

    // A prime number has exactly two divisors: 1 and itself (so i will be 2)
    if (i == 2) {
        printf("\n%d is a Prime number\n", n);
    } else {
        printf("\n%d is not a Prime number\n", n);
    }

    return 0;
}
