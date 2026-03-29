#include <stdio.h>
float add(float a, float b) {
  return a + b; 
}
float sub(float a, float b) { 
  return a - b; 
}
float mul(float a, float b) { 
  return a * b; 
}
float div(float a, float b) { 
    if (b != 0) return a / b; 
    else { printf("Error: Division by zero\n"); return 0; }
}

int main() {
  float x, y;
  printf("Enter two numbers: ");
  scanf("%f %f", &x, &y);
  printf("Sum: %.2f\nDifference: %.2f\nProduct: %.2f\nDivision: %.2f\n", 
          add(x, y), sub(x, y), mul(x, y), div(x, y));
  return 0;
}