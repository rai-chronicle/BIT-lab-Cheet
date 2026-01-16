#include<stdio.h>
#include<math.h>
int main(){

    int temp,range,rem, i;
    printf("Enter the high range: ");
    scanf("%d",&range);

    for(i=1;i<=range;i++){
        int sum=0,num=0;
        temp=i;
        while(temp>0){
            temp /= 10;
            num++;
        }
        temp = i;
        while(temp!=0){
            rem = temp % 10;
            sum = sum + round(pow(rem, num));
            temp /= 10;
        }
        if (sum == i){
            printf("%d ",sum);
        }
    }
    return 0;
}
