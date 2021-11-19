#include <stdio.h>
int main(void)
{
    int x,y,z;
    x = 15;
    y = 10;
    z = 0;

    while (y > 0)

    {
        z = z + x;
        y--;
    }
    
    printf("%d ", z);
    return 0;
}