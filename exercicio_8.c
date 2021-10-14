#include <stdio.h>
#include <stdlib.h>
int main(){   

float nota1, nota2, nota3, media, nota_rec;

printf("\nINFORME A PRIMEIRA NOTA: ");
scanf ("%f",&nota1);

printf("\nINFORME A SEGUNDA NOTA: ");
scanf ("%f",&nota2);

printf("\nINFORME A TERCEIRA NOTA: ");
scanf ("%f",&nota3);

media = (nota1 + nota2 + nota3) / 3; 

if (media >= 7 ){
        printf("\n\t\t\t VOCÊ FOI APROVADO");   
}else{   
    printf("\nINFORME A NOTA DE RECUPERAÇÃO: ");
    scanf ("%f",&nota_rec);{
        if(nota_rec >= 5){
            printf("\n\t\t  VOCÊ FOI APROVADO NA RECUPERAÇÃO");       
        }else printf("\n\t\t  VOCÊ FOI REPROVADO NA RECUPERAÇÃO");       
 } } }

return 0;
}