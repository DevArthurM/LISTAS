#include <stdio.h>

int main(void)
{
    int Ano, Mes, Dia, DiaF;
    printf("Infome sua idade em Anos, Meses e Dias\n");
    printf("Anos:\t");
    scanf("%i", &Ano);
    printf("Meses:\t");
    scanf("%i", &Mes);
    printf("Dias:\t");
    scanf("%i", &Dia);
    DiaF = (Ano * 365) + (Mes * 30) + Dia;
    printf("Voce tem %i dias de vida.", DiaF);
    return 0;
}
