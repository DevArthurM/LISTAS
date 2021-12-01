#include <stdio.h>
#include <math.h>

int main(void)
{
    float Real, Dolar, Euro;
    int Opc;
    printf("Informe a quantia em reais.\n");
    scanf("%f", &Real);
    printf("Escolha uma das opcoes.\n1- Dolar\n2 -Euro\n");
    scanf("%i", &Opc);
    switch (Opc)
    {
    case 1:
        Dolar = Real / 3.05;
        printf("O valor ficaria em:\n %.2f Dolares", Dolar);
        break;
    case 2:
        Euro = Real / 3.31;
        printf("O valor ficaria em:\n %.2f Euros", Euro);
        break;
    default:
        printf("Escolha uma alternativa valida.");
        break;
    }
    return 0;
}
