#include <stdio.h>
int main()
{
	int num, x, y=0, count=0, num2;
	printf("Enter a number: ");
	scanf("%d", &num);
	num2 = num;
	do{
		num2 /= 10;
		++count;
	}while(num2!=0);
	if(count == 5){
		while (num!=0) {
		x = num %10;
		y = y+x;
		num = num/10;
	}
	printf("Sum = %d",y);
	return 0;
}
}
