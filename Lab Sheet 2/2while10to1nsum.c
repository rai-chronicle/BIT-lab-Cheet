#include <stdio.h>

int main() {
    int i = 10,sum = 0;
    printf("Numbers: ");

    while (i >= 1) {
        printf("%d ", i);
        sum = sum + i;
        i--;
    }

    printf("\nTotal Sum: %d\n", sum);
    return 0;
}
