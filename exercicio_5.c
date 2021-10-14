#include <stdlib.h>

int main()
{
    float salario, salario_reajustado;    
    printf("INFORME O SEU SALÁRIO: \n ");
    scanf("%f", &salario);

        if(salario <= 2000)
            {
                salario_reajustado = salario * 1.5;
                printf("O SALARIO REAJUSTADO SERÁ DE: %.2f",salario_reajustado);
            }
        else if (salario > 2000 && salario <= 5000)
            {
                salario_reajustado = salario * 1.20;
                printf("O SALARIO REAJUSTADO SERÁ DE: %.2f",salario_reajustado);
            }

        else 
            {  
                salario_reajustado = salario * 1.10;
                printf("O SALARIO REAJUSTADO SERÁ DE: %.2f",salario_reajustado);
            }

    return(0);
}
