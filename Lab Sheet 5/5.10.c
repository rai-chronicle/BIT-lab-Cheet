#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int main() {
    struct date d;
    printf("Enter day, month, year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);
    printf("Date: %d/%d/%d\n", d.day, d.month, d.year);
    return 0;
}