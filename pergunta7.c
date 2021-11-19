#include <stdio.h>
int main(void)
{
    int x1, x2,x3, i;

    printf("Digite x1: "); scanf("%d", &x1);
    printf("Digite x2: "); scanf("%d", &x2);
    printf("Digite x3: "); scanf("%d", &x3);

    for(i=1; i <= x1; i++)

    {
        x2 = x1 + x3;
        x3 = x1 - x2;
    }
    
    printf("%d ", x1+x2);
    return 0;
}