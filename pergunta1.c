#include <stdio.h>
int main(void)
{
    int i, x;
    x = 5;
    i = 1;

    while (i < 6)
    {
        x = x * (-1);
        if (x < i) x = x + i;
        i++;
    }
    printf("a Resposta é: \n %d ", x);
    return 0;
}