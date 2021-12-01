#include <stdio.h>

int main()
{
    float val, prest;
    printf("Digite o valor da compra.\n");
    scanf("%f", &val);
    prest = val / 5;
    printf("Cada prestação irá sair por R$ %.2f.", prest);
    return 0;
}
