#include<stdio.h>
int main (){

   int num[10],i;
   float sum=0,prod=1,max,mean=0;
   for(i=0;i<10;i++){
      printf("Enter any integer: ");
      scanf("%d",&num[i]);
   }
   max=num[0];
   for (i=0;i<10;i++){
      sum += num[i];
      prod *= num[i];
      if (num[i]>max){
         max = num[i];
      }
   }
   mean = sum / 10;

   printf("\nSum is %.3f",sum);
   printf("\nProduct is %.3f",prod);
   printf("\nAverage is %.3f",mean);
   printf("\nMaximum is %.3f",max);

   return 0;
}
