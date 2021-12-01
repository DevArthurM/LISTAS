#include <stdio.h>
int main()
{
    int Mes;
    printf("Digite o numero do mes.\n");
    scanf("%i", &Mes);
    switch (Mes)
    {
    case 1:
    case 3:
    case 5:
    case 8:
        printf("31 dias.");
        break;
    case 4:
    case 6:
    case 7:
    case 9:
    case 10:
        printf("30 dias");
        break;
    case 2:
        printf("28 ou 29 dias");
        break;
    default:
        printf("informe um valor verdadeiro");
        break;
    }
    return;
}
