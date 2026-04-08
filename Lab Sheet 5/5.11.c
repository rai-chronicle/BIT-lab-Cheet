#include <stdio.h>

struct registration {
    char username[9];
    char id[10];
    int pin;
};

int main() {
    struct registration s;
    printf("Enter username (8 chars), ID (9 chars), and 5-digit PIN: ");
    scanf("%s %s %d", s.username, s.id, &s.pin);
    
    printf("\nRegistration Info:\nUser: %s\nID: %s\nPIN: %d\n", s.username, s.id, s.pin);
    return 0;
}