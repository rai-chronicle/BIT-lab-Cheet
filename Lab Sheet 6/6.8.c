#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    int *age = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Age of employee %d: ", i + 1);
        scanf("%d", (age + i));
        if (*(age + i) > 80) count++;
    }

    printf("Employees above 80 years: %d\n", count);
    free(age);
    return 0;
}