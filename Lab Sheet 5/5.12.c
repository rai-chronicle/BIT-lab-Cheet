#include <stdio.h>

struct date {
    int d, m, y;
};

int main() {
    struct date d1, d2;
    printf("Enter first date (d m y): ");
    scanf("%d %d %d", &d1.d, &d1.m, &d1.y);
    printf("Enter second date (d m y): ");
    scanf("%d %d %d", &d2.d, &d2.m, &d2.y);

    printf("Difference: %d years, %d months, %d days\n", 
            (d2.y - d1.y), (d2.m - d1.m), (d2.d - d1.d));
    return 0;
}