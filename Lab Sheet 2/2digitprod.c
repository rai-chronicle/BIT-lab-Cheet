#include <stdio.h>
int main() {
    int num, digit;
    long product = 1;

    printf("Enter any number: ");
    scanf("%d", &num);
    if (num == 0) {
        product = 0;
    } else {
        while (num > 0) {
            digit = num % 10;
            product *= digit;
            num /= 10;
        }
    }
    printf("Product of digits: %ld\n", product);

    return 0;
}
