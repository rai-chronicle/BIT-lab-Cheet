#include <stdio.h>
int main()
{
	int length, km, m, cm, mm;
	printf("Enter total length: ");
	scanf("%d", & length);
	km = length /1000000;
	m = (length % 1000000)/10000;
	cm = ((length % 1000000)%10000)/100;
	mm = ((length % 1000000)%10000)%100;
	printf("Length = %dkm %dm %dcm %dmm", km, m, cm, mm);
	return 0;
}
