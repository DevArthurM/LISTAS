#include <stdio.h>
#include <math.h>
int main(void)
{
    int idade;
    printf("Digite sua idade.\nIDADE:");
    scanf("%i", &idade);
    //Idade
    if (idade >= 18)
    {
        printf("Maior de idade.\n");
    }
    else if (idade < 18)
    {
        printf("Menor de idade.\n");
    }
    else if (idade > 65)
    {
        printf("Pessoa idosa.\n");
    }
    //Eleitoral
    if (idade < 16)
    {
        printf("Nao eleitor\n");
    }
    else if (idade >= 18 && idade <= 65)
    {
        printf("Eleitor obrigatório\n");
    }
    else if (idade >= 16 && idade <= 18 || idade > 65)
    {
        printf("Voto facultativo\n");
    }
    return 0;
}