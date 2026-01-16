#include<stdio.h>
int main(){

    int a=1, b=1, c, count;
    printf("Enter the count of series: ");
    scanf("%d",&count);

    for(int i=0;i<count;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
