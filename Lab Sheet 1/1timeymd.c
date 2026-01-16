#include <stdio.h>
int main() {
	int t_days, yrs, m, d;
	printf("Enter total days = ");
	scanf("%d", &t_days);
	yrs = t_days/365;
	m = (t_days % 365)/30;
	d = (t_days % 365)%30;
	printf ("Time: %dyrs %dmonths %ddays ", yrs, m, d);
	return 0;
}
