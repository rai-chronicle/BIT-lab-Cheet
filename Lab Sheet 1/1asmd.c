#include <stdio.h>
int main() {
	int x, y, sum, diff, prod, quo;
	printf ("Enter any two numbers: ");
	scanf("%d %d", &x, &y);
	sum =x+y;
	diff = x-y;
	prod = x*y;
	quo = x/y;
	printf("Sum = %d\n", sum);
	printf("Difference = %d\n", diff);
	printf ("Product = %d\n", prod);
	printf("Quotient = %d\n", quo);
	return 0;
}
