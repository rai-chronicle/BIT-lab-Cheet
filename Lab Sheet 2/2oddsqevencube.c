#include <stdio.h>

int main() {
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        result = num * num * num;
        printf("%d is even. Cube: %d * %d * %d = %d\n", num, num, num, num, result);
    }
    else {
        result = num * num;
        printf("%d is odd. Square: %d * %d = %d\n", num, num, num, result);
    }
    return 0;
}
