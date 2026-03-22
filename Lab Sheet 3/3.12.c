#include<stdio.h>
int main(){
  int i,j,temp;
  int marks[10];

  for(i=0;i<10;i++){
    printf("Enter marks of student %d: ",i+1);
    scanf("%d",&marks[i]);
  }

  for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
      if (marks[i]<marks[j]){
        temp = marks[i];
        marks[i] = marks[j];
        marks[j] = temp;
      }
    }
  }
  printf("\n====Top 5 students====\n");
  printf("Position\tMarks\n");
  for(i=0;i<5;i++){
    printf("%d\t\t%d\n",i+1,marks[i]);
  }
  return 0;
}