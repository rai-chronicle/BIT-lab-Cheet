#include <stdio.h>
int main()
{
	int s1,s2, s3, s4, s5, a,p;
	printf("Enter marks obtained by student: ");
	scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
	a = s1 + s2 + s3 + s4 + s5;
	p= (a/5);
	printf("Aggregate marks = %d\n", a);
	printf("Percentage marks = %d\n", p);
	return 0;
}
