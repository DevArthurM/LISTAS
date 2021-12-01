/*Elaborar um programa que leia uma matriz A de dimensão 5 x 7 de inteiros e verifique qual
é seu maior elemento e imprima-o juntamente com sua posição na matriz (linha e coluna).*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int matriz_a[5][7], num_maior, linha_num_maior, coluna_num_maior;
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 7; coluna++)
        {
            matriz_a[linha][coluna] = rand() % 10 + 1;
            printf("[%d]\t", matriz_a[linha][coluna]);
        }
        printf("\n");
    }
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 7; coluna++)
        {
            if (linha == 0 && coluna == 0)
            {
                num_maior = matriz_a[linha][coluna];
                linha_num_maior = linha;
                coluna_num_maior = coluna;
            }
            else if (matriz_a[linha][coluna] > num_maior)
            {
                num_maior = matriz_a[linha][coluna];
                linha_num_maior = linha;
                coluna_num_maior = coluna;
            }
        }
    }
    printf("O maior valor da matriz e %d.\n", num_maior);
    printf("Ele aparece nas seguintes posicoes.\n\n");
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 7; coluna++)
        {
            if (matriz_a[linha][coluna] == num_maior)
            {
                printf("Linha:\t%d\nColuna:\t%d\n\n", linha, coluna);
            }
        }
    }
    return 0;
}