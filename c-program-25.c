#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("\nEnter n value: ");
    scanf("%d", &n);

    // Print the first two fixed terms of the Fibonacci series
    printf("%d\t%d", a, b);

    // The do-while loop prints the remaining terms
    // It runs for (n - 2) times since the first two terms are already printed.
    do {
        c = a + b;
        printf("\t%d", c);

        // Shift the values for the next iteration
        a = b;
        b = c;

        // Decrease the counter
        n--;

    } while (n - 2 > 0); // Loop continues until the n value has been printed

    return 0;
}
