#include <stdio.h>
#include <math.h>
int main(void)
{
    int lado1, lado2, lado3;
    float area, semiP;
    printf("inforeme o valor do lado 1\n");
    scanf("%d", &lado1);
    printf("inforeme o valor do lado 2\n");
    scanf("%d", &lado2);
    printf("inforeme o valor do lado 3\n");
    scanf("%d", &lado3);
    if (lado1 > lado2 + lado3 || lado2 > lado1 + lado3 || lado3 > lado2 + lado1)
    {
        printf("nao forma triangulo!\n");
    }
    else
    {
        semiP = (lado1 + lado2 + lado3) / 2;
        area = sqrt(semiP * (semiP - lado1) * (semiP - lado2) * (semiP - lado3));
        printf("Area do triangulo e: %.2f\n", area);
    }
    return 0;
}
