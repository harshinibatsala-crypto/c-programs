#include <stdio.h>

int main() {
    int n, a, p = 1; // n: input number, a: loop counter, p: product (factorial)

    printf("Enter n value: ");
    scanf("%d", &n);

    // Loop to calculate the factorial
    // It starts from n and multiplies down to 1 (e.g., 4 * 3 * 2 * 1)
    for (a = n; a >= 1; a--) {
        p = p * a;
    }

    // Print the result. Note: The print statement uses 'n' twice
    // The first %d prints the input number, the second %d prints the result 'p'
    printf("%d factorial is %d\n", n, p);

    return 0;
}
