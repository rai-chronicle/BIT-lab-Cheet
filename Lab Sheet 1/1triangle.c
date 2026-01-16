#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s, area;
	printf("Enter sides of triangle = ");
	scanf("%d %d %d", &a, &b,&c);
	s=(a+b+c)/2;
	area = pow((s*(s-a)*(s-b)*(s-c)),(0.5));
	printf ("Area = %d ", area);
	return 0;
}
