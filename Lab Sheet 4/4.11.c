#include <stdio.h>

int sumTwenty() {
  int sum = 0;
  for (int i = 1; i <= 20; i++) 
    sum += i;
  return sum;
}

int main() {
  printf("Sum of first 20 natural numbers: %d\n", sumTwenty());
  return 0;
}