#include <stdio.h>
#include <string.h>

struct airline {
    char flight_num[10];
    char origin[5];
    char dest[5];
    char start_time[10];
    char arrival_time[10];
};

int main() {
    struct airline flights[3] = {
        {"AI101", "KTM", "DEL", "10:00", "11:30"},
        {"AI102", "DEL", "BKK", "14:00", "18:00"},
        {"AI103", "KTM", "PKR", "08:00", "08:30"}
    };
    char search[5];

    printf("Enter airport code to search flights: ");
    scanf("%s", search);

    for(int i = 0; i < 3; i++) {
        if(strcmp(flights[i].origin, search) == 0) {
            printf("Flight %s to %s leaves at %s\n", 
                    flights[i].flight_num, flights[i].dest, flights[i].start_time);
        }
    }
    return 0;
}