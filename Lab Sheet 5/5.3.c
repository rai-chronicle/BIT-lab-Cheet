#include <stdio.h>

struct student {
    char name[50];
    int rollno;
    float mark;
};

int main() {
    struct student s[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter name, roll, and marks for student %d: ", i+1);
        scanf("%s %d %f", s[i].name, &s[i].rollno, &s[i].mark);
    }

    printf("\nStudents with marks > 50:\n");
    for(int i = 0; i < 5; i++) {
        if(s[i].mark > 50)
            printf("Name: %s, Roll: %d\n", s[i].name, s[i].rollno);
    }
    return 0;
}