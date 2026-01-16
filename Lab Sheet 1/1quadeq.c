#include <stdio.h>
#include<math.h>
int main()
{
	double a,b,c,dct, r1, r2, img, real;
	printf("Enter coefficients a, b, c for ax2+bx+c=0: ");
	scanf ("%lf %lf %lf", &a, &b, &c );
	dct = (b*b)-(4*a*c);
	if (dct >0){
		r1 = (-b+sqrt(dct))/(2*a);
		r2 = (-b-sqrt(dct))/(2*a);
		printf("Root 1 = %lf \n Root 2 = %lf", r1, r2);
	}
	else if (dct == 0) {
			r1 = r2 = -b/(2*a);
			printf("Root 1 = Root 2 = %lf", r1);
	}
	else {
	real = -(b/2*a);
	img = sqrt(-dct)/(2*a);
	printf ("Root 1 = %lf + %lf \n", real, img);
	printf ("Root 2 = %1f- %lf", real, img);
	}
	return 0;
}
