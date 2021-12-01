/*8. Dada uma matriz A de dimensão 5 x 7 gere sua transposta. Imprima a matriz original e a
sua transposta.*/
// Bibliotecas
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// Constantes
int main()
{
    srand(time(NULL));
    int matriz[5][7], matriz_transposta[7][5];
    printf("MATRIZ\n\n");
    for (int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 7; coluna++)
        {
            matriz[linha][coluna] = rand() % 100 + 1;
            printf("[%d]\t",matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("MATRIZ TRANSPOSTA\n\n");
    for (int linha = 0; linha < 7; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna++)
        {
            matriz_transposta[linha][coluna] = matriz[coluna][linha];
            printf("[%d]\t",matriz_transposta[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}