#include<stdio.h>
int main(){
  int numbers[10], i;
  printf("Enter 10 numbers:\n");
  for(i=0; i<10; i++){
    printf("Number %d: ", i+1);
    scanf("%d", &numbers[i]);
  }
  printf("The numbers you entered are: ");
  for(i=0; i<10; i++){
    printf("Element %d: Value = %d, Address = %p\n", i, numbers[i], (void*)&numbers[i]);
  }
  return 0;
}