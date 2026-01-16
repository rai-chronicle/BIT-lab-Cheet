#include <stdio.h>
int main() {
	int x,y,q,r;
	printf("Enter any 2 integers: ");
	scanf("%d %d", &x, &y);
	q = x/y;
	r = x%y;
	printf("Quotient=%d\n", q);
	printf("Remainder = %d\n", r);
	return 0;
}
