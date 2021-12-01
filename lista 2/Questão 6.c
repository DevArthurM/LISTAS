#include <stdio.h>
#include <math.h>

int main(void)
{
    int c1, c2, h;
    printf("Informe o valor do cateto 1:\t");
    scanf("%i", &c1);
    printf("Informe o valor do cateto 2:\t");
    scanf("%i", &c2);
    h = sqrt(pow(c1, 2) + pow(c2, 2));
    printf("O valor da hipotenusa e %i", h);
    return 0;
}
