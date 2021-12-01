/*
4. Escreva um programa que calcule e escreva a soma dos 10 primeiros termos da
seguinte série: 
1/2 + 2/4 + 3/6 + 4/8 ...
*/
#include <stdio.h>

int main()
{
    int A = 1, B;
    float soma = 0;
    for (int i = 0; i < 10; i++)
    {
        B = 2 * A;
        soma += (float)A / B;
        printf("|.%d/%d\n", A, B);
        A++;
    }
    printf("A soma dos valores e: %.2f", soma);
    return 0;
}