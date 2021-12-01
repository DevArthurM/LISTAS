#include <stdio.h>

int main()
{
    char nome[15];
    int sal, vendas, salf;
    printf("Insira o nome do funcionário.\n");
    scanf("%s", &*nome);
    printf("Insira o salário do funcionário.\n");
    scanf("%d", &sal);
    printf("Insira o valor em vendas feitas pelo funcionário\n");
    scanf("%d", &vendas);
    salf = vendas * 0.15;
    printf("\n");
    printf("RESULTADO\n");
    printf("\nNome do funcionário:\n \t%s", nome);
    printf("\nSalário sem comissão:\n \tR$%d ", sal);
    printf("\nSalário final com comissão:\n \tR$%d", salf + sal);
    return 0;
}
