#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("ASCII value:\n");
    for (i = 0; str[i] != '\n'; i++)
        printf("%c = %d\n", str[i], str[i]);

    return 0;
}