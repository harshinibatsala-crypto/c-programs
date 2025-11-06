#include <stdio.h>

int main() {
    int n, r = 0, s = 0, temp;

    printf("Enter n value: ");
    scanf("%d", &n);

    temp = n;

    // Loop to reverse the number
    while (n != 0) {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }

    // Compare the original number (stored in temp) with the reversed number (s)
    if (temp == s) {
        printf("%d is a palindrome\n", temp);
    } else {
        printf("%d is not a palindrome\n", temp);
    }

    return 0;
}
