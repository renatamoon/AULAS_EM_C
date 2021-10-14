#include <stdio.h>

int main(void) {

    float vfin, valorf, resu;

    int esc;

  printf("Digite o valor final da compra:");
  scanf("%f", &vfin);
  printf("Escolha a forma de pagamento desejada: ");
  printf("\n1 - à vista com 10%% de desconto");
  printf("\n2 - no crédito com 5%% de desconto");
  printf("\n3 -em 2 vezes sem juros");
  printf("\n4 - em 3 vezes com 10%% de juros\n");
  scanf("%d", &esc);
  switch (esc) {

    case 1: printf("você escolheu paga à vista\n");
          valorf = vfin * 0.10;
          resu = vfin - valorf;
          printf("O valor a pagar é de %.2f", resu);
            break;
    case 2: printf("você escolheu pagar com cartão\n");
          valorf = vfin * 0.05;
          resu = vfin - valorf;
          printf("O valor a pagar é de %.2f", resu);
            break;
    case 3: printf("você escolheu pagar em 2x\n");
         
          resu = vfin;
          printf("O valor a pagar é de %.2f", resu);
            break;
    case 4: printf("você escolheu pagar em 3x\n");
          valorf = vfin * 0.10;
          resu = valorf + vfin;
          printf("O valor a pagar é de %.2f", resu);
            break;
      default:
          printf("Forma inválida!");

  }
  return 0;
}