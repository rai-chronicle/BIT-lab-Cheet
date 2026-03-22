#include <stdio.h>

int main() {
    int numbers[10];
    int i;

    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\n--- Array Details ---\n");
    printf("%-10s | %-10s | %-15s\n", "Index", "Value", "Memory Address");

    for (i = 0; i < 10; i++) {
        printf("Index [%d]  | %-10d | %p\n", i, numbers[i], (void*)&numbers[i]);
    }

    return 0;
}