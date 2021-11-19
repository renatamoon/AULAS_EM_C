#include <stdio.h>
int main(void)
{
    int i,k;
    k = 0;

    for (i=1; i<=3; i++)
    {
        k++;
        if (i*3 < 4) {k++; printf(" Maçã "); }
        else printf(" Pera ");

        if (k<5) printf(" Melancia ");
    }
    
    return 0;
}