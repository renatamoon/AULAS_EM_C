#include <stdio.h>
#include <locale.h>
#include <stdlib.h>   //rand();
#include <time.h>  //srand (time(NULL));

int main(void) {

  srand (time(NULL));
  int usuario, usuario2, computador;
  char resposta = 's';
  computador = rand() % 100;

  while (computador != usuario || computador != usuario2 ) {

    printf("ESCOLHA UM NUMERO\n");
    scanf("%d",&usuario); 

    printf("ESCOLHA OUTRO NUMERO\n");
    scanf("%d",&usuario2); 

    printf("\nO COMPUTADOR JÁ ESCOLHEU O NUMERO :)\n");
    printf("\n --------------");

    if (computador == usuario) printf("\nVOCÊ ACERTOU O NÚMERO\n");
      else if (computador == usuario2) printf("\nVOCÊ ACERTOU O NÚMERO\n");
          else if (computador != usuario) printf("\nVOCÊ NÃO ESCOLHEU O MESMO NUMERO QUE O COMPUTADOR\n");

    if (computador >= 50 && usuario >= 50 && usuario2 >= 50) printf("\nMEU NUMERO ESTÁ ENTRE OS SEUS\n");
      else if (computador <= 49 && usuario <= 49 && usuario2 <= 49) printf("\nMEU NUMERO NÃO ESTÁ ENTRE OS SEUS\n");
        else if (usuario == computador && usuario2 == computador ) printf("\nVOCÊ ACERTOU O NUMERO!\n");          

    printf("\nVAMOS JOGAR NOVAMENTE!\n");
    printf("\n ---------------------------");
    printf("ESCOLHA UM NUMERO\n");
    scanf("%d",&usuario); 

    printf("ESCOLHA OUTRO NUMERO\n");
    scanf("%d",&usuario2); 

    if (resposta == 's' || resposta == 'S')
      printf("\nJOGANDO NOVAMENTE\n");
    else printf("JOGO FINALIZADO");
  }
  return 0;
}