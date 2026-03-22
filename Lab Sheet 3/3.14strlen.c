#include<stdio.h>
#include<string.h>
int main() {
  char str[100],length,count=0,i;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  length = strlen(str)-1;
  printf("Length using strlen(): %d\n", length);

  for(i=0; str[i]!='\0'; i++)
    count++;
  printf("Length using manual counting: %d\n", count-1);

  return 0;
}