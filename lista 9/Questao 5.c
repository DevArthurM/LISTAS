/*Escreva um programa que receba uma matriz A 5 x 4 e gere um vetor Mcol de 5
elementos, onde cada um desses elementos seja a média dos elementos de uma linha da
matriz*/
//Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Constantes
#define NUM_LINHAS 5
#define NUM_COLUNAS 4
//Funções
int main()
{
    srand(time(NULL));
    //Variaveis
    int matriz[NUM_LINHAS][NUM_COLUNAS];
    float media_linha[NUM_LINHAS] = {0};
    printf("Matriz gerada aleatoriamente.\n");
    for (int linha = 0; linha < NUM_LINHAS; linha++)
    {
        for (int coluna = 0; coluna < NUM_COLUNAS; coluna++)
        {
            matriz[linha][coluna] = rand() % 100 + 1;
            media_linha[linha] += matriz[linha][coluna];
            printf("[%d]\t", matriz[linha][coluna]);
        }
        printf("\n");
        media_linha[linha] /= NUM_COLUNAS;
    }
    printf("\n\nMedia de cada linha\n");
    printf("[LINHA]\t[MEDIA]\n");
    for (int linha = 0; linha < NUM_LINHAS; linha++)
    {
        printf("  [%d]\t [%.2f]\n",linha,media_linha[linha]);
    }
    return 0;
}