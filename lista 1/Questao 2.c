#include <stdio.h>

int main(void)
{
    int dis, com;
    printf("Digite a quantidade de Km percorrido.\n");
    scanf("%d", &dis);
    printf("Digite a quantidade de Combustível usados em litros.\n");
    scanf("%d", &com);
    printf("O gasto médio de gasolina por KM é de %d litros", dis / com);
    return 0;
}
