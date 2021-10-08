int main(void) 

{
  int a, b, c;
  printf("DIGITE O PRIMEIRO NUMERO: \n");
  scanf("%d", &a);
  printf("DIGITE O SEGUNDO NUMERO: \n");
  scanf("%d", &b);
  printf("DIGITE O TERCEIRO NUMERO: \n");
  scanf("%d", &c);
  if (a==b && a==c && b==c) printf("TODOS OS NUMEROS SÃO IGUAIS.");
  else if (a>b && a>c) printf("O MAIOR NUMERO LIDO É: %d",a);
      else if (b>a && b>c) printf("O MAIOR NUMERO LIDO É %d",b);
          else             printf("O MAIOR NUMERO LIDO É %d",c);
  return 0;
}