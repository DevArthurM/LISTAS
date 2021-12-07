/*Agora complete o programa anterior: leia também um vetor Preço[4], contendo o valor de
cada produto comercializado. Seu programa deve determinar e imprimir o valor em reais
(R$) que a empresa tem armazenado em seus 3 depósitos. */
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
    int Estoque[NUM_PRODUTOS][NUM_DEPOSITOS];
    int num_produto_linha[NUM_PRODUTOS] = {0};
    float preco[NUM_PRODUTOS];
    for(int produto = 0; produto < NUM_PRODUTOS; produto++)
    {
        printf("Digite o valor para o produto [%d]: ",produto);
        scanf("%f",&preco[produto]);
    }
    printf("\t\tD1\tD2\tD3\t\n");
    //Processo
    for (int linha = 0; linha < NUM_PRODUTOS; linha++)
    {
        printf("PRODUTO %d\t", linha + 1);
        for (int coluna = 0; coluna < NUM_DEPOSITOS; coluna++)
        {
            Estoque[linha][coluna] = rand() % 100 + 1;
            printf("[%d]\t", Estoque[linha][coluna]);
            num_produto_linha[linha] += Estoque[linha][coluna];
        }
        printf("\n");
    }
    printf("\tPRODUTOS\n");
    for (int indice = 0; indice < NUM_PRODUTOS; indice++)
    {
        printf("Quantidade produto %d: %d\n", indice + 1, num_produto_linha[indice]);
        printf("Preco total: R$%.2f\n",preco[indice] * num_produto_linha[indice]);
    }

    return 0;
}