#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    float salb, prest;
    printf("Digite o salario bruto\nR$:");
    scanf("%f", &salb);
    printf("Digite a prestacao\nR$:");
    scanf("%f", &prest);
    if ((salb * 0.3) > prest)
    {
        printf("Prestacao aprovada.");
    }
    else
    {
        printf("Prestacao recusada.");
    }
    return 0;
}
