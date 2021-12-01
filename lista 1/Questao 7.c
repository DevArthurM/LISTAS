#include <stdio.h>

int main()
{
    float sal, rend;
    printf("Digite o valor do salário.\n");
    scanf("%f", &sal);
    rend = (sal * 0.007) + sal;
    printf("O rendimento no próximo mês será de R$%.2f.", rend);
    return 0;
}
