#include <stdio.h>

struct Date {
    char month[15];
    int day;
    int year;
};

int main() {
    struct Date Date1 = {"February", 25, 1957};
    printf("Initialized Date: %s %d, %d\n", Date1.month, Date1.day, Date1.year);
    return 0;
}