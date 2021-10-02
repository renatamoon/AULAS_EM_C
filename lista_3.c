/*
10)Faça um programa em C que leia o sexo (M ou F) e a altura (em metros) de uma pessoa.
Informe seu peso ideal, usando as seguintes fórmulas:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7 
*/

#include <stdio.h>
int main(void)
{
  char sexo;
  float alt;
  printf("Digite seu sexo <F/M>: ");
  scanf ("%s",&sexo);
  printf ("Digite sua altura: ");
  scanf ("%f",&alt);  

  if (sexo=='f'|| sexo=='F') printf ("Peso ideal da mulher é %.2f ",62.1*alt-44.7);
  else if (sexo=='m' || sexo=='M')printf ("Peso ideal do homem é %.2f ",72.7*alt-58);
       else   printf ("Sexo inválido!");

  return 0;
  
}