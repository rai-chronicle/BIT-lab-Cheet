#include <stdio.h>

struct Date {
    int day;
    char month[15];
    int year;
};

struct Employee {
    char name[20];
    float salary;
    struct Date hire_date;
};

int main() {
    struct Employee Person1 = {"Hari", 50000.0, {10, "March", 2001}};

    printf("Employee: %s\nSalary: %.2f\nHire Date: %s %d, %d\n", 
            Person1.name, Person1.salary, Person1.hire_date.month, 
            Person1.hire_date.day, Person1.hire_date.year);
    return 0;
}