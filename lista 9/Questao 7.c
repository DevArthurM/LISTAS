/*7. Escreva um algoritmo que leia uma matriz A de dimensão 4 x 4 de valores reais, calcule e
imprima a soma dos elementos da diagonal secundária. Coloque os elementos da diagonal
secundária em um vetor S.*/
//Bibliotecas
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Constantes
#define LINHA_COLUNA 4
int main()
{
    //Variáveis.
    srand(time(NULL));
    int matriz[LINHA_COLUNA][LINHA_COLUNA];
    int vetor_soma_diagonal[4] = {0};
    int soma_valores = 0;
    int cont = 0;
    //Processo.
    printf("MATRIZ GERADA\n");
    for (int linhas = 0; linhas < LINHA_COLUNA; linhas++)
    {
        for (int colunas = 0; colunas < LINHA_COLUNA; colunas++)
        {
            matriz[linhas][colunas] = rand() % 100 + 1;
            printf("[%d]\t", matriz[linhas][colunas]);
        }
        printf("\n");
    }
    for (int linhas = 0; linhas < LINHA_COLUNA; linhas++)
    {
        for (int colunas = 0; colunas < LINHA_COLUNA; colunas++)
        {
            if(linhas + colunas == 3)
            {
                soma_valores += matriz[linhas][colunas];
                vetor_soma_diagonal[cont] += matriz[linhas][colunas];
                cont++;
            }
        }
    }
    printf("Vetor soma diagonal\n");
    for(int indice = 0; indice < 4; indice++)
    {
        printf("[%d] ",vetor_soma_diagonal[indice]);
    }
    printf("\nA soma desses valores e: %d.\n",soma_valores);
    return 0;
}