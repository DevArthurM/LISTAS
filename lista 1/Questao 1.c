
#include <stdio.h>

int main(void)
{
    int A, B;
    printf("Digite o primeiro número;\n");
    scanf("%i", &A);
    printf("Digite o segundo número;\n");
    scanf("%i", &B);
    printf("\nO soma dos números é: %i\t", A + B);
    printf("\nO divisão dos números é: %i\t", A / B);
    printf("\nO multiplicação dos números é: %i\t", A * B);
    return 0;
}
