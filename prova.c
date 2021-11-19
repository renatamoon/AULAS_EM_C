#include <stdio.h>

int main(void) 
{
  int A, B, C;
  
  printf("DIGITE O VALOR DE A: "); scanf("%d", &A);
  printf("DIGITE O VALOR DE B: "); scanf("%d", &B);
  printf("DIGITE O VALOR DE C: "); scanf("%d", &C);
 

  if (A>B && A>C) printf ("%d", A);
  else if (B>C) printf ("%d", B);
       else printf ("%d",C);

  return 0;
}