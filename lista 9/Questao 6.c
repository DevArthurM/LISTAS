/*6. Escreva um programa que leia uma matriz quadrada de ordem N (N<=20) valores reais, e
divida cada elemento da matriz pelo elemento da diagonal principal da correspondente
linha. Imprima a matriz após a operação no formato de matriz.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Constantes
#define NUM_LINHAS_COLUNAS 3

int main()
{
    srand(time(NULL));
    //VARIÁVEIS
    int matriz_principal[NUM_LINHAS_COLUNAS][NUM_LINHAS_COLUNAS];
    float matriz_resultante[NUM_LINHAS_COLUNAS][NUM_LINHAS_COLUNAS];
    //PROCESSAMENTO
    printf("   MATRIZ GERADA\n");
    for (int linha = 0; linha < NUM_LINHAS_COLUNAS; linha++)
    {
        for (int coluna = 0; coluna < NUM_LINHAS_COLUNAS; coluna++)
        {
            matriz_principal[linha][coluna] = rand() % 10 + 1;
            printf("[%d]\t", matriz_principal[linha][coluna]);
        }
        printf("\n");
    }

printf("   MATRIZ RESULTANTE\n");
    for (int linha = 0; linha < NUM_LINHAS_COLUNAS; linha++)
    {
        for (int coluna = 0; coluna < NUM_LINHAS_COLUNAS; coluna++)
        {
            matriz_resultante[linha][coluna] = (float)matriz_principal[linha][linha]/matriz_principal[linha][coluna];
            printf("[%.2f]\t",matriz_resultante[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}