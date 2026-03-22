#include<stdio.h>
void main(){
  int mat[2][3], i, j;
  printf("Enter the elements of the matrix:\n");
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      printf("Element [%d][%d]: ",i,j);
      scanf("%d",&mat[i][j]);
    }
  }
  printf("The matrix is:\n");
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      printf("%-5d ",mat[i][j]);
    }
    printf("\n");
  }
}