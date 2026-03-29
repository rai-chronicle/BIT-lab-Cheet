#include <stdio.h>

int power(int a, int b) {
    int res = 1;
    for (int i = 0; i < b; i++) 
      res *= a;
    return res;
}

int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("%d raised to %d is %d\n", base, exp, power(base, exp));
    return 0;
}