#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
    char remarks[100];
};

int main() {
    struct student s;
    printf("Enter Name, Roll, Marks, and Remarks: ");
    scanf("%s %d %f %s", s.name, &s.roll, &s.marks, s.remarks);
    
    printf("\n--- Student Data ---\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\nRemarks: %s\n", s.name, s.roll, s.marks, s.remarks);
    return 0;
}