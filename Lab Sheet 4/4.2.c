#include <stdio.h>

int findLargest(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main() {
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("Largest number is: %d\n", findLargest(n1, n2, n3));
    return 0;
}