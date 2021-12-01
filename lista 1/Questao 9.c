#include <stdio.h>

int main()
{
    float pre, prev, por;
    printf("Informe o valor do produto.\n");
    scanf("%f", &pre);
    printf("Informe o percentual de lucro.\n");
    scanf("%f", &por);
    prev = (por * pre) + pre;
    printf("O valor de venda será de R$%.2f", prev);
    return 0;
}
