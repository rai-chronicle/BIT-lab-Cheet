#include <stdio.h>

union student {
    int roll;
    float marks;
};

int main() {
    union student s;

    s.roll = 10;
    printf("Roll: %d\n", s.roll);

    s.marks = 85.5;
    printf("Marks: %.2f\n", s.marks);

    return 0;
}