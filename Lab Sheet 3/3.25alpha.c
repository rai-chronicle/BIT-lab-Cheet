#include <stdio.h>
#include <string.h>

int main() {
    char name[10][50], temp[50];
    int i, j;

    printf("Enter names of 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        fgets(name[i], sizeof(name[i]), stdin);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\nSorted names:\n");
    for (i = 0; i < 10; i++)
        printf("%s", name[i]);
    return 0;
}