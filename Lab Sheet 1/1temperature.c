#include <stdio.h>
int main()
{
	int c,f;
	printf("Enter temperature in C :");
	scanf("%d", &c);
	f=((9*c)/5)+32;
	printf("Temperature in F = %d", f);
	return 0;
}
