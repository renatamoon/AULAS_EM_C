#include <stdio.h>
int main(void)
{
    int i, num, res;
    num = 1;
    res = 0;

    for(i=0; i < 5; i++)

    {
        num = num * i;
        res = res + num;
    }
    
    printf("%d ", res);
    return 0;
}