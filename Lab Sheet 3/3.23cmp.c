#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int len1, len2;

    printf("Enter 1st string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter 2nd string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 > len2)
        printf("Larger string: %s", str1);
    else if (len2 > len1)
        printf("Larger string: %s", str2);
    else
        printf("Both strings have the same length.\n");

    return 0;
}