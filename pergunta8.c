#include <stdio.h>
int main(void)
{
    int n, a, b;

    printf("Numero: ");
    scanf("%d", &n);

    a = 0;
    b = 1;
    while (n >= 0)

    {
        a = a + b;
        b = b+2;
        n = n - 1;
    }
    
    printf("%d ", a);
    return 0;
}