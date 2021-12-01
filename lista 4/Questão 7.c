#include <stdio.h>
int main()
{
    int cod;
    printf("Digite o codigo do produto.\n");
    scanf("%i", &cod);
    switch (cod)
    {
    case 1:
        printf("Alimento nao perecivel.");
        break;
    case 2:
    case 3:
    case 4:
        printf("Alimento perecivel.");
        break;
    case 5:
    case 6:
        printf("Vestuario.");
        break;
    case 7:
        printf("Higiene pessoal.");
        break;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        printf("Limpeza e utensilios domesticos.");
        break;
    default:
        printf("Codigo invalido.");
        break;
    }
    return;
}
