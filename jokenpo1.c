#include <stdio.h>
#include <locale.h>
#include <stdlib.h>   //rand();
#include <time.h>  //srand (time(NULL));


int main(void) {

  srand (time(NULL));
  setlocale (LC_ALL,"Portuguese");
  int usuario, computador;
  char resposta = 's';
  computador = rand() % 3;

  while (resposta == 's' || resposta == 'S') {

    printf("ESCOLHA SUA JOGADA: 0- PEDRA, 1-PAPEL, 2-TESOURA\n");
    scanf("%d",&usuario);

    switch (usuario)
    {
      case 0: printf ("\nVOCÊ OPTOU POR PEDRA\n"); break;
      case 1: printf ("\nVOCÊ OPTOU POR PAPEL\n"); break;
      case 2: printf ("\nVOCÊ OPTOU POR TESOURA\n"); break;
      printf("\n --------------");
    }

    while (usuario<0 || usuario>2)
    {
      printf ("DIGITE UMA OPÇÃO VÁLIDA: ");
      scanf ("%d",&usuario);  
    }

    printf("\nVez do computador....\n");
    printf("\n --------------");

    if (computador == 0) printf("\nO computador escolheu pedra\n");
      else if (computador == 1) printf("\nO computador escolheu papel\n");
    else printf("\nO computador escolheu tesoura\n");    

    if (usuario == 1 && computador == 0) printf("\nVOCÊ GANHOU\n");
      else if (usuario == 0 && computador == 1 ) printf("\nO COMPUTADOR GANHOU\n");
        else if (usuario == 2 && computador == 1 ) printf("\nVOCÊ GANHOU\n");
          else if (usuario == 1 && computador == 2 ) printf("\nO COMPUTADOR GANHOU\n");
            else if (usuario == 0 && computador == 2 ) printf("\nVOCÊ GANHOU\n");
              else if (usuario == 2 && computador == 0 ) printf("\nO COMPUTADOR GANHOU\n");
    else printf("\nEmpate! Ninguém ganhou\n");

    printf("\nDESEJA JOGAR NOVAMENTE? <S/N> \n");
    scanf("%s",&resposta);

    if (resposta == 's' || resposta == 'S')
      printf("\nJOGANDO NOVAMENTE\n");
    else printf("JOGO FINALIZADO");
  }
  return 0;
}