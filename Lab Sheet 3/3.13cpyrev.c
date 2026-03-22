#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int original[n], reversed[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &original[i]);
    }

    for (i = 0; i < n; i++)
        reversed[(n - 1) - i] = original[i];

    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) printf("%d ", original[i]);

    printf("\nReversed copy:  ");
    for (i = 0; i < n; i++) printf("%d ", reversed[i]);

    printf("\n");
    return 0;
}