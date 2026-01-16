#include <stdio.h>
int main()
{
	int a, b, c=0;
	printf("Enter 2 numbers = ");
	scanf("%d %d",&a, &b);
	c = a;
	a = b;
	b = c;
	printf("a = %d \n b= %d", a, b);
	return 0;
}
