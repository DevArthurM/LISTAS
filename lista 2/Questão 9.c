#include <stdio.h>
#include <math.h>

int main(void)
{
    int HT, CONT;
    float VH, PD, SB, TD, SL;
    CONT = 0;
    // Coleta de dados
    printf("Informe o valor de horas trabalhadas no mes.\n");
    scanf("%i", &HT);
    printf("Informe o valor da hora trabalhada.\n");
    scanf("%f", &VH);
    printf("Digite o percentual de desconto.\n");
    scanf("%f", &PD);
    printf("\n");
    // Processamento
    SB = HT * VH;
    CONT++;
    TD = (PD / 100) * SB;
    CONT++;
    SL = SB - TD;
    CONT++;
    // Apresentação
    printf("Horas trabalhadas no mes: %i\n", HT);
    printf("Salario Bruto: R$%.2f\n", SB);
    printf("Desconto: R$%.2f\n", TD);
    printf("Salario Liquido: R$%.2f\n", SL);
    printf("Contador: %i\n", CONT);
    return 0;
}
