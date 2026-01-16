#include <stdio.h>
int main()
{
	float r, vol;
	const float PI = 3.1415;
	printf("Enter radius of sphere: ");
	scanf("%f", &r);
	vol = (4.0/3.0)*PI*(r*r*r);
	printf("Volume = %.2f", vol);
	return 0;
}
