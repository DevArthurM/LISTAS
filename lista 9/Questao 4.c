/*Escreva um programa que leia uma matriz NxM valores reais, determine e imprima o
maior elemento de cada linha da matriz e sua posição na linha.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    // Variaveis 1_ ETAPA
    int linhas_matriz, coluna_matriz;
    printf("Digite o numero de linhas e colunas da matriz.\nExemplo: linhas/colunas\n> ");
    scanf("%d/%d", &linhas_matriz, &coluna_matriz);
    // Variaveis 2_ ETAPA
    int matriz[linhas_matriz][coluna_matriz], maior_elemento[linhas_matriz];
    printf("Matriz gerada aleatoriamente.\n");
    for (int linha = 0; linha < linhas_matriz; linha++)
    {
        for (int coluna = 0; coluna < coluna_matriz; coluna++)
        {
            matriz[linha][coluna] = rand() % 100 + 1;
            printf("[%d]\t", matriz[linha][coluna]);
        }
        printf("\n");
    }
    for (int linha = 0; linha < linhas_matriz; linha++)
    {
        for (int coluna = 0; coluna < coluna_matriz; coluna++)
        {
            if (coluna == 0)
            {
                maior_elemento[linha] = matriz[linha][coluna];
            }
            else if (matriz[linha][coluna] > maior_elemento[linha])
            {
                maior_elemento[linha] = matriz[linha][coluna];
            }
        }
    }
    printf("Maiores numeros de cada linha.\n");
    printf("Linha\tNumero\t\n");
    for (int linha = 0; linha < linhas_matriz; linha++)
    {
        printf("[%d]\t[%d]\n", linha,maior_elemento[linha]);
    }
    return 0;
}