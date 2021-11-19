#include <stdio.h>
int main(void)
{
    int v1, v2, v3;
    printf("DIGITE v1: "); scanf("%d", &v1);
    printf("DIGITE v2: "); scanf("%d", &v2);
    printf("DIGITE v3: "); scanf("%d", &v3);
    printf("%d \t ", v1);

    while (v3 > 1)

    {
        v1 = v1 * v2;
        v3 = v3 - 1;
        printf("%d \t", v1);

    }
    
    
    return 0;
}