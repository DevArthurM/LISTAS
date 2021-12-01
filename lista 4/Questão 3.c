#include <stdio.h>
int main()
{
    float a, b, result;
    char resp;
    printf("digite o valor de a.\n");
    scanf("%f", &a);
    printf("digite o valor de b.\n");
    scanf("%f", &b);
    printf("digite qual operacao deseja efetuar.\n");
    scanf("%s", &resp);
    switch (resp)
    {
    case '/':
        result = (a / b);
        printf("A divisao e: %.2f", result);
        break;
    case '*':
        result = (a * b);
        printf("A multiplicacao e: %.2f", result);
        break;
    case '+':
        result = (a + b);
        printf("A soma e: %.2f", result);
        break;
    case '-':
        result = (a - b);
        printf("A subitracao e: %.2f", result);
        break;
    default:
        printf("informe um valor verdadeiro");
        break;
    }
    return;
}
