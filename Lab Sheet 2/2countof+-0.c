#include<stdio.h>
int main(){

    int num,i,input;
    int positive_count=0,negative_count=0,zero_count=0;
    printf("How many integer do you want to enter?: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        printf("Enter integer: ");
        scanf("%d",&input);

        if (input>0){
            positive_count++;
        } else if (input<0){
            negative_count++;
        } else {
            zero_count++;
        }
    }
    printf("\nNumber of positive integer: %d",positive_count);
    printf("\nNumber of negative integer: %d",negative_count);
    printf("\nNumber of zero: %d",zero_count);

    return 0;
}
