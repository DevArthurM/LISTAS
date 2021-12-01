#include <stdio.h>
int main(void)
{
    int sex;
    float altura, pesoideal;
    printf("Informe sua altura.\n");
    scanf("%f", &altura);
    printf("Informe seu sexo.\n1 - Mulher\n2 - Homem\n");
    scanf("%i", &sex);
    switch (sex)
    {
    case 1:
        pesoideal = (62.1 * altura) - 44.7;
        printf("Peso ideal e: %.2f", pesoideal);
        break;
    case 2:
        pesoideal = (72.7 * altura) - 58;
        printf("Peso ideal e: %.2f", pesoideal);
        break;
    default:
        printf("Digite uma opcao valida.");
        break;
    }
    return 0;
}
