#include <stdio.h>
int main()
{
    int M, N, cont = 1;
    printf("Digite um valor para o primeiro numero: \n");
    scanf("%d", &M);
    do
    {
        printf("Digite um valor para o segundo numero: \n");
        scanf("%d", &N);
        if (M == N)
        {
            printf("Parabens os numeros sao iguais.\n");
        }
        else
        {
            printf("O segundo numero não e igual ao primeiro.\n");
            cont++;
        }
    } while (M != N);
    printf("Numero de tentativas: %d",cont);
    return 0;
}