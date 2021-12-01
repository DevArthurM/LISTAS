#include <stdio.h>
int main()
{
    int idade, valor;
    valor = 100;
    printf("Digite a idade.\n");
    scanf("%i", &idade);
    if (idade < 10)
    {
        valor = valor + 80;
        printf("preco:R$%i,00", valor);
    }
    else if (idade >= 10 && idade <= 30)
    {
        valor = valor + 50;
        printf("preco:R$%i,00", valor);
    }
    else if (idade >= 40 && idade <= 60)
    {
        valor = valor + 95;
        printf("preco:R$%i,00", valor);
    }
    else
    {
        valor = valor + 130;
        printf("preco:R$%i,00", valor);
    }
    return 0;
}