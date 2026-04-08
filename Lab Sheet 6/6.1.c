#include <stdio.h>

int main() {
    char a = 'Z';
    float b = 10.5;
    int c = 100;

    printf("Address of char variable: %p\n", (void*)&a);
    printf("Address of float variable: %p\n", (void*)&b);
    printf("Address of int variable: %p\n", (void*)&c);

    return 0;
}