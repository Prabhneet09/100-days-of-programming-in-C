#include <stdio.h>

int main() {
    int n, r;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0");
        return 0;
    }

    printf("Binary: ");

    int divisor = 1;
    while (divisor <= n / 2)
        divisor *= 2;

    while (divisor > 0) {
        r = n / divisor;
        printf("%d", r);
        n %= divisor;
        divisor /= 2;
    }

    return 0;
}