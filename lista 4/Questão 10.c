#include <stdio.h>
int main()
{
    int a, b, opc, cal;
    printf("Digite um valor para o primeiro numero.\n");
    scanf("%i", &a);
    printf("Digite um valor para o segundo numero.\n");
    scanf("%i", &b);
    printf("Escolha uma das opcoes a seguir:\n1-Media entre os numeros digitados\n2-Diferenca entre os numeros\n3-Produtos entre os numeros\n4-Divisao do primeiro pelo segundo.\n");
    scanf("%i", &opc);
    switch (opc)
    {
    case 1:
        cal = a + b / 2;
        printf("Resposta: %i", cal);
        break;
    case 2:
        cal = a - b;
        printf("Resposta: %i", cal);
        break;
    case 3:
        cal = a * b;
        printf("Resposta: %i", cal);
        break;
    case 4:
        cal = a / b;
        printf("Resposta: %i", cal);
        break;
    default:
        printf("Digite uma opcao valida.");
        break;
    }
    return 0;
}
