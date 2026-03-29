#include <stdio.h>

long int factorial(int, int);

int main() {
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
      long int result = factorial(num, 1);
      printf("Factorial of %d is: %ld\n", num, result);
    return 0;
}
long int factorial(int n, int start) {
    long int res = 1;
    for (int i = start; i <= n; i++) {
        res *= i;
    }
    return res;
}