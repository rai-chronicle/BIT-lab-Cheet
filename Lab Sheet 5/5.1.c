#include <stdio.h>

struct StudentRecord {
    char name[20];
    int marks;
    char grade;
};

int main() {
    struct StudentRecord s[4] = {
        {"Ram", 100, 'C'},
        {"Sita", 120, 'B'},
        {"Gita", 130, 'B'},
        {"Gopal", 150, 'A'}
    };

    printf("%-10s %-15s %-10s\n", "Name", "Total Marks", "Grade");
    for(int i = 0; i < 4; i++)
        printf("%-10s %-15d %-10c\n", s[i].name, s[i].marks, s[i].grade);
    return 0;
}