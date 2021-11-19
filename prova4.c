#include <stdio.h>

int main(void) 
{
  int A, B, C;

  printf ("DIGITE O VALOR DE A: "); scanf("%d", &A);
  printf ("DIGITE O VALOR DE B: "); scanf("%d", &B);
  printf ("DIGITE O VALOR DE C: "); scanf("%d", &C);

  if (C > B || A*B > C) printf ("%d", A);
  else printf ("%d", B+C);

  

  return 0;
}