#include <stdio.h>
int main()
{
    float valordecompra, valordevenda;
    printf("Digite o valor de compra.\n");
    scanf("%f", &valordecompra);
    if (valordecompra < 10)
    {
        valordevenda = (valordecompra * 0.7) + valordecompra;
        printf("Valor de venda:%.2f", valordevenda);
    }
    else if (valordecompra >= 10 && valordecompra <= 30)
    {
        valordevenda = (valordecompra * 0.5) + valordecompra;
        printf("Valor de venda:%.2f", valordevenda);
    }
    else if (valordecompra >= 30 && valordecompra < 50)
    {
        valordevenda = (valordecompra * 0.4) + valordecompra;
        printf("Valor de venda:%.2f", valordevenda);
    }
    else if (valordecompra > 50)
    {
        valordevenda = (valordecompra * 0.3) + valordecompra;
        printf("Valor de venda:%.2f", valordevenda);
    }
    return 0;
}
