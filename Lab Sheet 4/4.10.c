#include <stdio.h>

int recurPow(int a, int b) {
    if (b == 0) return 1;
    return a * recurPow(a, b - 1);
}

int main() {
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", recurPow(a, b));
    return 0;
}