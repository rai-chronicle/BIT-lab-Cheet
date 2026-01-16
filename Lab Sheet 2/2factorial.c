#include<stdio.h>
int main(){

    int num,result=1,i;
    printf("Enter any integer: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        result = i*result;
    }
    printf("Factorial of %d is %d", num,result);

    return 0;
}
