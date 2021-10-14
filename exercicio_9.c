#include <stdio.h>
#include <stdlib.h>
int main(){   

float pontos;

printf("\nINFORME QUANTOS PONTOS VOCÊ FEZ NA PROVA: ");
scanf ("%f",&pontos);

if (pontos <30 ){
        printf("\n\t\t\t CLASSIFICAÇÃO: REGULAR");   
}else{       
if(pontos >= 31 && pontos <= 60){
            printf("\n\t\t  CLASSIFICAÇÃO: BOM");       
}else{       
if(pontos >= 61 && pontos <= 90){
            printf("\n\t\t  CLASSIFICAÇÃO: MUITO BOM");       
}else{       
if(pontos >= 91 && pontos <= 100){
            printf("\n\t\t  CLASSIFICAÇÃO: ÓTIMO");       
}else{       
if (pontos > 100){
            printf("\n\t\t  PONTUAÇÃO INVÁLIDA.");
 } } } } }
    printf("\n\t\tPONTUAÇÃO INFORMADA:" ,pontos);

return 0;
}