#include <stdio.h>
int main() {
	long t_sec, hrs, mins, sec;
	printf("Enter total seconds: ");
	scanf("%ld", & t_sec);
	hrs = t_sec /3600;
	mins = (t_sec%3600)/60;
	sec = (t_sec%3600) % 60;
	printf("Time: %ld:%ld:%ld (HH:MM: SS)", hrs, mins, sec);
	return 0;
}
