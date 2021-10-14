#include <stdio.h>
#include <stdlib.h>
int main(){   

float peso , altura, imc;

printf("\nInforme seu peso em Kg:");
scanf ("%f",&peso);
printf("\nInforme sua altura em m:");
scanf ("%f",&altura);

imc = peso / (altura*altura);   

if (imc <18.5 ){
        printf("\n\t\t\t MUITO MAGRO");   
}else{       
if(imc >= 18.5 && imc<25){
            printf("\n\t\t  NORMAL");       
}else{       
if(imc >= 25 && imc<30){
            printf("\n\t\t  SOBREPESO");       
}else{       
if(imc >= 30 && imc<=40){
            printf("\n\t\t  SOBREPESO");       
}else{       
if (imc>40){
            printf("\n\t\t  OBESIDADE");
 } } } } }
    printf("\n\t\tSeu IMC é: %.2f",imc);

return 0;
}