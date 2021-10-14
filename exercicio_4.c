// EXERCÍCIO 4 - Faça um programa em C que leia dois números inteiros. Informe se os números são iguais ou, caso não sejam, exiba-os em ordem crescente.

#include<stdio.h>

int main()
{
int numero1, numero2, troca;

     printf("Digite o primeiro numero inteiro: ");
     scanf("%d", &numero1);
     printf("Digite o segundo  numero inteiro: ");
     scanf("%d",&numero2);
    
    if( numero1 > numero2 )
    {
        troca = numero2;
        numero2 = numero1; 
        numero1 = troca;
    }
    if( numero1 > numero2)
    {
        troca = numero2;
        numero2 = numero1;
        numero1 = troca;
    }

    printf("\n%d, %d, %d\n\n",numero1,numero2);
    system("Pause");
    
    return 0;
}