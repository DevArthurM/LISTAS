/*11. Aproveite ainda o programa do exercício anterior para determinar e imprimir qual o
depósito que tem menor quantidade de mercadoria. Para isto, gere o vetor Deposito, com
3 elementos, cada um sendo o total de mercadoria de um depósito e, determine o de
menor quantidade.*/

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
    int deposito[NUM_DEPOSITOS] = {0}, menor_deposito, indice_deposito;
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
            deposito[coluna] += Estoque[linha][coluna];
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
    printf("\n\n");
    for(int deposito_numero = 0; deposito_numero < NUM_DEPOSITOS; deposito_numero++)
    {
        if(deposito_numero == 0)
        {
            menor_deposito = deposito[deposito_numero];
            indice_deposito = deposito_numero;
        }
        if(deposito[deposito_numero] < menor_deposito)
        {
            menor_deposito = deposito[deposito_numero];
            indice_deposito =  deposito_numero;
        }
    }
    printf("O MENOR DEPOSITO: [D%d]\nCOM %d itens.\n",indice_deposito + 1, menor_deposito);
    return 0;
}