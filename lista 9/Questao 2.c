/*Escreva um programa que leia uma matriz A5x6 e um valor X, todos valores reais,
multipliquem a linha 3 da matriz pelo escalar X, armazene o resultado em uma matriz C.
Exiba o resultado na saída.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int matriz_principal[5][6], matriz_resultante[5][6] = {0}, escalar;
    printf("DIGITE O VALOR QUE IRA ESCALAR A MATRIZ.\n");
    scanf("%d", &escalar);
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            matriz_principal[linha][coluna] = rand() % 10 + 1;
        }
    }
    printf("MATRIZ GERADA ALEATORIAMENTE PARA FINS DIDATICOS\n");
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            printf("[%d]\t", matriz_principal[linha][coluna]);
        }
        printf("\n");
    }
    for (int coluna = 0; coluna < 5; coluna++)
    {
        matriz_resultante[2][coluna] = matriz_principal[2][coluna] * escalar;
    }
    printf("\nM A T R I Z   R E S U L T A N T E\n");
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            printf("[%d]\t", matriz_resultante[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}