/*Escreva um programa que leia uma matriz Estoque[4][3], de valores inteiros, contendo o
estoque em 3 depósitos de cada um dos 4 produtos de uma empresa. Seu programa deve
calcular o total de cada produto e armazenar no vetor Total[4]. Ao final imprimir um mapa
contendo os estoques por depósito (a matriz) e o estoque total de cada produto (o vetor). */
// Bibliotecas
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Constantes
#define NUM_PRODUTOS 4
#define NUM_DEPOSITOS 3
int main()
{
    //Semente random.
    srand(time(NULL));
    //Variaveis.
    int Estoque[NUM_PRODUTOS][NUM_DEPOSITOS], valor_cada_produto[NUM_PRODUTOS] = {0};
    printf("\t\tD1\tD2\tD3\t\n");
    //Processo
    for (int linha = 0; linha < NUM_PRODUTOS; linha++)
    {
        printf("PRODUTO %d\t", linha + 1);
        for (int coluna = 0; coluna < NUM_DEPOSITOS; coluna++)
        {
            Estoque[linha][coluna] = rand() % 100 + 1;
            printf("[%d]\t", Estoque[linha][coluna]);
            valor_cada_produto[linha] += Estoque[linha][coluna];
        }
        printf("\n");
    }
    for (int indice = 0; indice < NUM_PRODUTOS; indice++)
    {
        printf("Quantidade produto %d: %d\n",indice + 1,valor_cada_produto[indice]);
    }
    return 0;
}