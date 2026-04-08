#include <stdio.h>
#include <string.h>

struct Person {
    char name[50], address[100];
};

int main() {
    int n;
    printf("How many names to enter? ");
    scanf("%d", &n);
    struct Person p[n], temp;

    for(int i = 0; i < n; i++) {
        printf("Enter name and address: ");
        scanf("%s %s", p[i].name, p[i].address);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(p[i].name, p[j].name) > 0) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("\nSorted List:\n");
    for(int i = 0; i < n; i++)
        printf("%s - %s\n", p[i].name, p[i].address);
    return 0;
}