#include <stdio.h>
int main() {
    int num, digit;
    long sum = 0;

    printf("Enter any number: ");
    scanf("%d", &num);
    if (num == 0) {
        sum = 0;
    } else {
        while (num > 0) {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }
    }
    printf("Sum of digits: %ld\n", sum);

    return 0;
}
