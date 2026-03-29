#include <stdio.h>

float calculateProduct(float f, int i) {
    return f * i;
}

int main() {
    float val1;
    int val2;
    printf("Enter a float and an integer: ");
    scanf("%f %d", &val1, &val2);
    printf("Product: %.2f\n", calculateProduct(val1, val2));
    return 0;
}