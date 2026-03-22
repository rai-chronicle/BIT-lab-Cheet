#include<stdio.h>
int sort(int num[]){
   int i,j,temp;
   for(i=0;i<10;i++){
      for(j=i+1;j<10;j++){
         if(num[i]>num[j]){
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
         }
      }
   }
}

int main(){
   int num[10];
   for (int i=0;i<10;i++){
      printf("Enter integer %d: ", i + 1);
      scanf("%d",&num[i]);
   }
   sort(num);
   printf("Ascending order is:\n");
   for(int i=0;i<10;i++){
      printf("%d ",num[i]);
   }
   printf("\n");
   return 0;
}
