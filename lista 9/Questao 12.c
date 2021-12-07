#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LINHA_COLUNA 5
#define VALOR 1
#define LINHA 2
int main()
{
    srand(time(NULL));
    int matriz[LINHA_COLUNA][LINHA_COLUNA];
    int menor_elemento[2];
    int maior_elemento;

    //Preenchendo
    printf("\tMATRIZ\n\n");
    for (int linha = 0; linha < LINHA_COLUNA; linha++)
    {
        for (int coluna = 0; coluna < LINHA_COLUNA; coluna++)
        {
            matriz[linha][coluna] = rand() % 100 + 1;
            if (matriz[linha][coluna] < 10)
            {
                printf("[0%d]\t", matriz[linha][coluna]);
            }
            else
            {
                printf("[%d]\t", matriz[linha][coluna]);
            }
        }
        printf("\n");
    }
    //Printando
    printf("\tAREA RACHURADA\n\n");
    for (int linha = 0; linha < LINHA_COLUNA; linha++)
    {
        for (int coluna = 0; coluna < LINHA_COLUNA; coluna++)
        {
            if (linha + coluna <= 4)
            {
                if (matriz[linha][coluna] < 10)
                {
                    printf("[0%d]\t", matriz[linha][coluna]);
                }
                else
                {
                    printf("[%d]\t", matriz[linha][coluna]);
                }
            }
            else
            {
                printf("[__]\t");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("O maior elemento da linha onde se encontra o menor elemento da area rachurada\n");
    //Calculando
    for (int linha = 0; linha < LINHA_COLUNA; linha++)
    {
        for (int coluna = 0; coluna < LINHA_COLUNA; coluna++)
        {
            if (linha + coluna <= 4)
            {
                if (linha == 0 && coluna == 0)
                {
                    menor_elemento[VALOR] = matriz[linha][coluna];
                    menor_elemento[LINHA] = linha;
                }
                else if (menor_elemento[VALOR] > matriz[linha][coluna])
                {
                    menor_elemento[VALOR] = matriz[linha][coluna];
                    menor_elemento[LINHA] = linha;
                }
            }
        }
    }
    for (int coluna = 0; coluna < LINHA_COLUNA; coluna++)
    {
        if (menor_elemento[LINHA] + coluna != 4)
        {
            if (coluna == 0)
            {
                maior_elemento = matriz[menor_elemento[LINHA]][coluna];
            }
            else if (matriz[menor_elemento[LINHA]][coluna] > maior_elemento)
            {
                maior_elemento = matriz[menor_elemento[LINHA]][coluna];
            }
        }
    }
    printf("O maior elemento [%d]\n", maior_elemento);
    return 0;
}