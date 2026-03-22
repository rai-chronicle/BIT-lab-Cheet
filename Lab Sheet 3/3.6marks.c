#include<stdio.h>
int main(){
  int i,j,temp,num;
  printf("Enter the number of students: ");
  scanf("%d",&num);
  int marks[num];

  for(i=0;i<num;i++){
    printf("Enter marks of student %d: ",i+1);
    scanf("%d",&marks[i]);
  }

  for(i=0;i<num;i++){
    for(j=i+1;j<num;j++){
      if (marks[i]<marks[j]){
        temp = marks[i];
        marks[i] = marks[j];
        marks[j] = temp;
      }
    }
  }
  printf("Marks in descending order:\n");
  for(i=0;i<num;i++){
    printf("%d ",marks[i]);
  }
  printf("\n");
  printf("Highest marks: %d\n",marks[0]);
  printf("Lowest marks: %d\n",marks[num-1]);
  return 0;
}