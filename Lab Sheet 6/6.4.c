#include <stdio.h>

int main() {
    int *p_int;
    float *p_float;
    char *p_char;

    printf("Size of int pointer: %zu bytes\n", sizeof(p_int));
    printf("Size of float pointer: %zu bytes\n", sizeof(p_float));
    printf("Size of char pointer: %zu bytes\n", sizeof(p_char));

    return 0;
}