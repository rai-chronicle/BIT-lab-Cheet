#include <stdio.h>
int main(){
	int r,a,c;
	printf("Enter radius of circle: ");
	scanf("%d", &r);
	a= (22/7)*r*r;
	c = 2*(22/7)*r;
	printf(" Area = %d\n", a);
	printf ("Circumference = %d\n", c);
	return 0;
}
