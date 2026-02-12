#include<stdio.h>
int main(){

   int num[10],i,j,temp;
   for (i=0;i<10;i++){
      printf("Enter any integer: ");
      scanf("%d",&num[i]);
   }

   for(i=0;i<10;i++){
      for(j=i+1;j<10;j++){
         if (num[i]>num[j]){
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;
         }
      }
   }
   printf("Ascening order is:\n");
   for(i=0;i<10;i++){
      printf("%d ",num[i]);
   }

   return 0;
}
