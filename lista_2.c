/*
Faça um programa em C que leia as coordenadas (x, y) de um ponto (x,y).
Informe qual a sua localização no plano cartesiano: primeiro quadrante, segundo quadrante, terceiro quadrante, quarto quadrante, origem, eixo x ou eixo y. 
*/

#include <stdio.h>
int main(void)
{
  float x,y;
  printf("Digite o valor de x: ");
  scanf ("%f",&x);
  printf("Digite o valor de y: ");
  scanf ("%f",&y);

  if (x==0 && y==0)                           printf ("ORIGEM");
  else if(x>0 && y>0)                         printf ("1º Quadrante");
       else if(x<0 && y>0)                    printf ("2º Quadrante");
            else if(x<0 && y<0)               printf ("3º Quadrante");
                 else if (x>0 && y<0)         printf ("4º Quadrante");
                      else if (x!=0 && y==0)  printf ("EIXO x");
                            else              printf ("EIXO y");
                            
  return 0;
}