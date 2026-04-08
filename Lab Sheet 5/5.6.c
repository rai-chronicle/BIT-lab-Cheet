#include <stdio.h>

struct book {
    char name[50];
    int pages;
    float price;
};

int main() {
    struct book b, *ptr;
    ptr = &b;

    printf("Enter book name, pages, and price: ");
    scanf("%s %d %f", ptr->name, &ptr->pages, &ptr->price);

    printf("\nBook Details (using pointers):\n");
    printf("Name: %s\nPages: %d\nPrice: %.2f\n", ptr->name, ptr->pages, ptr->price);
    return 0;
}