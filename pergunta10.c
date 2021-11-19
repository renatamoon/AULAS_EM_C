#include <stdio.h>
int main(void)
{
    int r, s, t, i;
    printf("NUMERO 1: "); scanf("%d", &r);
    printf("NUMERO 2: "); scanf("%d", &s);
    printf("NUMERO 3: "); scanf("%d", &t);

    for (i=1; i<=5; i++)

    {
        if (r >= s) t = t+s;
        else t = t-s;

        r++;
        s = s+2;
    }
    
    printf("%d", t);   
    return 0;
}