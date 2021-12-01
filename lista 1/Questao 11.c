#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("\nDigite o primeiro numero.\n");
    scanf("%i", &num1);
    printf("\nDigite o segundo numero.\n");
    scanf("%i", &num2);
    if (num1 == num2)
    {
        printf("Os numeros sao iguais.");
    }
    else
    {
        if (num1 > num2)
        {
            printf("O numero %i é maior que o numero %i", num1, num2);
        }
        else
        {
            printf("O numero %i é maior que o numero %i", num2, num1);
        }
    }
    return 0;
}
