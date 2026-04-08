#include <stdio.h>

struct book {
    char name[50];
    int pages;
    float price;
};

int main() {
    struct book b[5];
    int max_idx = 0;

    for(int i = 0; i < 5; i++) {
        printf("Enter name, pages, and price %d: ", i+1);
        scanf("%s %d %f", b[i].name, &b[i].pages, &b[i].price);
        if(b[i].price > b[max_idx].price) 
            max_idx = i;
    }

    printf("\nMost Expensive Book:\n");
    printf("Name: %s, Pages: %d, Price: %.2f\n", b[max_idx].name, b[max_idx].pages, b[max_idx].price);
    return 0;
}