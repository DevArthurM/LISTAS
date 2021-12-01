/*Agora complete o programa anterior: leia também um vetor Preço[4], contendo o valor de
cada produto comercializado. Seu programa deve determinar e imprimir o valor em reais
(R$) que a empresa tem armazenado em seus 3 depósitos. */
// Bibliotecas
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// Constantes
#define NUM_PRODUTOS 4
#define NUM_DEPOSITOS 3

int main()
{
    //Semente random.
    srand(time(NULL));
    //Variaveis.
    int Estoque[NUM_PRODUTOS][NUM_DEPOSITOS];
    int quantidade_cada_produto[NUM_PRODUTOS] = {0};
    float valor_cada_produto[NUM_DEPOSITOS];
    float valor_estoque[3] = {0};
    //Processo
    printf("Digite o valor de cada um dos produtos\n");
    for (int produto = 0; produto < NUM_PRODUTOS; produto++)
    {
        printf("Produto %d: ", produto + 1);
        scanf("%f", &valor_cada_produto[produto]);
    }
    printf("\n\n");
    printf("\t\tD1\tD2\tD3\t\n");
    for (int linha = 0; linha < NUM_PRODUTOS; linha++)
    {
        printf("PRODUTO %d\t", linha + 1);
        for (int coluna = 0; coluna < NUM_DEPOSITOS; coluna++)
        {
            Estoque[linha][coluna] = (rand() % 100 + 1);
            printf("[%d]\t", Estoque[linha][coluna]);
            quantidade_cada_produto[linha] += Estoque[linha][coluna];
        }
        printf("\n");
    }
    for (int indice = 0; indice < NUM_PRODUTOS; indice++)
    {
        printf("Quantidade produto %d: %d\n", indice + 1, quantidade_cada_produto[indice]);
    }
    printf("\n");
    for (int linha = 0; linha < NUM_PRODUTOS; linha++)
    {
        for (int coluna = 0; coluna < NUM_DEPOSITOS; coluna++)
        {
            valor_estoque[linha] = valor_cada_produto[linha] * Estoque[linha][coluna];
        }
    }
    for (int linha = 0; linha < NUM_DEPOSITOS; linha++)
    {
        printf("O valor do %d estoque: R$%.2f\n", linha + 1, valor_estoque[linha]);
    }
    return 0;
}