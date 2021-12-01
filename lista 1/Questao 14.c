#include <stdio.h>

int main(void)
{
    float Rea, Dol, Eu;
    int Ops;
    printf("Digite o valor que quer converter em reais.\n");
    scanf("%f", &Rea);
    printf("Deseja ver a conversão em:\nEuro -1\nDol -2\n");
    scanf("%i", &Ops);
    switch (Ops)
    {
    case 1:
        Eu = Rea / 3.31;
        printf("%.2f Euros.", Eu);
        break;
    case 2:
        Dol = Rea / 3.05;
        printf("$ %.2f Dolar.", Dol);
        break;
    default:
        printf("Escolha uma opcao valida.");
        break;
    }
    return 0;
}
