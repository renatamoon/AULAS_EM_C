#include <stdio.h>

int main15(void) {
  int n1, n2, n3;
  printf("DIGITE O PRIMEIRO NUMERO: ");
  scanf("%d", &n1);
  printf("DIGITE O SEGUNDO NUMERO: ");
  scanf("%d", &n2);
  printf("DIGITE O TERCEIRO NUMERO:");
  scanf("%d", &n3);

  if (n1 >= n2 && n1 >= n3) {
    printf("O MAIO NUMERO É: %d ", n1);
    if (n2 > n3) printf("\nA SOMA DOS DOIS MENORES É: %d ", n1 + n2);
    else if (n3 > n2) printf("\nA SOMA DOS DOIS MAIORES É: %d", n1 + n3);
    else printf("\nA SOMA DO MAIOR NUMERO COM OS DOIS NUMEROS IGUAIS É: %d", n1 + n2 + n3);
    } else if (n2 >= n1 && n2 >= n3) { 
        printf("O maior número digitado é %d", n2);
        if (n1 > n3) printf("\nA SOMA DOS DOIS MAIORES É %d ", n2 + n1);
           else if (n3 > n1) printf("\nA SOMA DOS DOIS MAIORES É: %d", n2 + n3);
           else printf("\nA SOMA DO MAIOR NUMERO COM OS DOIS NUMEROS IGUAIS É: %d", n1 + n2 + n3);
    } else {
        printf("O MAIOR NUMERO DIGITADO É:  %d", n3);
        if (n1 > n2) printf("\nA SOMA DOS DOIS MENORES É: %d ", n3 + n1);
           else if (n2 > n1) printf("\nA SOMA DOS DOIS MAIORES É: %d", n3 + n2);
           else printf("\nA SOMA DO MAIOR NUMERO COM OS DOIS NUMEROS IGUAIS É: %d", n1 + n2 + n3);

    }
  return 0;
}