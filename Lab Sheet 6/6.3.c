#include <stdio.h>

int main() {
    int n, temp;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];
    int *ptr = marks;

    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    // Sort in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(ptr + i) < *(ptr + j)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    printf("Top five marks:\n");
    for (int i = 0; i < 5 && i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}