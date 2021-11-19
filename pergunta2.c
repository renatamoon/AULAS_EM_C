#include <stdio.h>
int main(void)
{
    int i, a, b, f;
    a = 0;
    b = 1;
    f = 1;

    for (i=2; i<=6; i++)
    {
    f = a + b;
    a = b;
    b = f;
    printf("%d \t", b);

    }
    return 0;
}