#include<stdio.h>
int main(){
  int arr[25], i, odd=0,pos=0, neg=0;
  for(i=0;i<25;i++){
    printf("Number %d: ",i+1);
    scanf("%d",&arr[i]);
  }

  for(i=0;i<25;i++){
    if(arr[i]%2!=0 && arr[i]!=0)
      odd++;
    if(arr[i]>0)
      pos++;
    else if(arr[i]<0)
      neg++;
  }
  printf("Number of odd numbers: %d\n",odd);
  printf("Number of even numbers: %d\n",25-odd);
  printf("Number of positive numbers: %d\n",pos);
  printf("Number of negative numbers: %d\n",neg);
  return 0;
}