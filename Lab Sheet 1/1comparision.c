#include <stdio.h>
int main()
{
	int num1,num2, result=0;
	printf("Enter 2 numbers = ");
	scanf("%d %d", &num1, &num2);
	result = (num1 > num2)?(num1 + num2):(num2 - num1);
	printf("Result = %d", result);
	return 0;
}
