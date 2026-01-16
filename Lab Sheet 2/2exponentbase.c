#include <stdio.h>

int main() {
    int base, exp, i=1;
    long result = 1;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    while (i <= exp) {
        result *= base;
        i++;
    }
    printf("%d raised to the power of %d is: %ld\n", base, exp, result);

    return 0;
}
