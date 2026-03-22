#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, up = 0, low = 0, spc = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\n'; i++) {
        if (isupper(str[i]))
            up++;
        else if (islower(str[i]))
            low++;
        else if (isspace(str[i]))
            spc++;
    }

    printf("Uppercase: %d\n", up);
    printf("Lowercase: %d\n", low);
    printf("Spaces: %d\n", spc);

    return 0;
}