#include <stdio.h>
#include <math.h>

int main(void)
{
    int valor, n100, n50, n10, n5, n1, troco;
    printf("Digite o valor que sera decomposto:\nR$ ");
    scanf("%i", &valor);
    n100 = valor / 100;
    n50 = (valor % 100) / 50;
    n10 = ((valor % 100) % 50) / 10;
    n5 = (((valor % 100) % 50) % 10) / 5;
    n1 = ((((valor % 100) % 50) % 10) % 5) / 1;
    printf("Valor informado de R$ %i,00\n", valor);
    printf("Notas de R$100,00: %i\n",n100);
    printf("Notas de R$50,00: %i\n",n50);
    printf("Notas de R$10,00: %i\n",n10);
    printf("Notas de R$5,00: %i\n",n5);
    printf("Moedas de R$1,00: %i\n",n1);
    return 0;
}
