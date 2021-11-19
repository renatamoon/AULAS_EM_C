#include <stdio.h>
int main(void)
{
    int a, b;
    a = 2;
    printf("Numero: ");
    scanf("%d", &b);
    
    while (a <= 30)

    {
        b = b + 2;
        if (b > 18) b--;
        a = a+b;
    }
    
    printf("\nValor de a: %d", a);
    printf("\nValor de b: %d", b);
    return 0;
}