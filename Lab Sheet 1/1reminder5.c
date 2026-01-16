#include <stdio.h>
int main()
{
	int num, rem;
	printf("Enter a number= ");
	scanf("%d", &num);
	rem = num % 5;
	printf("Remainder = %d", rem);
	return 0;
}
