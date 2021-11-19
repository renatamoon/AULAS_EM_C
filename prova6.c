#include <stdio.h>

int main() 
{
  float A, B, C;

  A = 1;
  B = A + 2;
  C = B * 3;
  C = A + B - C / B + A;

  printf("%.2f", C);
  

  return 0;
}