#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int valor(escolha, escolhav);
    int escolha, escolhav;
    printf("Escolha qual local de viagem.\n");
    printf("1-Regiao Norte.\n");
    printf("2-Regiao Nordeste.\n");
    printf("3-Regiao Centro-Oeste.\n");
    printf("4-Regiao Sul.\n");
    printf("Local de viagem: ");
    scanf("%i", &escolha);
    printf("Escolha o tipo de viagem.\n");
    printf("1-Ida.\n");
    printf("2-Ida e volta.\n");
    printf("Escolha: ");
    scanf("%i", &escolhav);
    printf("O valor da passagem e de R$%i,00", valor(escolha, escolhav));
    return 0;
}
int valor(int escolha, int escolhav)
{
    switch (escolha)
    {
    case 1:
        if (escolhav == 1)
        {
            return 500;
        }
        else if (escolhav == 2)
        {
            return 900;
        }
        break;
    case 2:
        if (escolhav == 1)
        {
            return 350;
        }
        else if (escolhav == 2)
        {
            return 650;
        }
        break;
    case 3:
        if (escolhav == 1)
        {
            return 350;
        }
        else if (escolhav == 2)
        {
            return 600;
        }
        break;
    case 4:
        if (escolhav == 1)
        {
            return 300;
        }
        else if (escolhav == 2)
        {
            return 550;
        }
        break;
    }
    return;
}
