/*
Ler 3 números (considere que poderá ocorrer valores iguais). 
Apresente o maior número lido. 
-----------------------------------------------------------
&& (E) --> TODAS as condições precisam ser verdadeiras para executar o if.

if (media >=6 && faltas < 20 && matr==1) printf ("Aprov");
else                                     printf ("Reprov");
-----------------------------------------------------------
|| (OU) --> Basta que APENAS UMA condição seja verdadeira para executar o if

*/

#include <stdio.h>
int main(void) 
{
  int a,b,c;
  printf("Digite o primeiro número: ");
  scanf ("%d",&a);
  printf("Digite o segundo número: ");
  scanf ("%d",&b);
  printf("Digite o terceiro número: ");
  scanf ("%d",&c);
  if (a==b && a==c && b==c)  printf ("Todos os números são iguais");
  else if (a>=b && a>c)      printf ("O maior número lido é %d",a);
       else if (b>a && b>=c) printf ("O maior número lido é %d",b);
            else             printf ("O maior número lido é %d",c);

  return 0;
}  