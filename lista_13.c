#include <stdio.h>
int main(void) 
{
  int num;
  printf("Digite o valor <em merrecas>: ");
  scanf ("%d",&num);
  printf ("\nMoedas de 100..........: %d",num/100);
  num = num % 100;

  printf ("\nMoedas de 50...........: %d",num/50);
  num = num % 50;

  printf ("\nMoedas de 10...........: %d",num/10);
  num = num %10;

  printf ("\nMoedas de 5............: %d",num/5);
  num = num % 5;

  printf ("\nMoedas de 1............: %d",num/1);
  return 0;
}