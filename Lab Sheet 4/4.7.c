#include <stdio.h>

long int recurFact(int n) {
    if (n == 0 || n == 1) return 1;
    return n * recurFact(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %ld\n", num, recurFact(num));
    return 0;
}