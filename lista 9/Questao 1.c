/* construa um programa que leia um vetor de nove posições e a partir deste vetor,
preencha uma matriz 3x3 com os mesmos valores. O preenchimento da matriz deve ser
por linha. Ao final, imprima o vetor e a matriz gerada.*/

#include <stdio.h>

int main()
{
    int vetor[9], matriz[3][3];
    printf("Preencha o vetor de 9 indices.\n");
    for (int i = 0; i < 9; i++)
    {
        printf("Digite o valor de numero %d.\n", i);
        scanf("%d", &vetor[i]);
    }
    int num_vetor = 0;
    for (int i_linha = 0; i_linha < 3; i_linha++)
    {
        for (int i_couluna = 0; i_couluna < 3; i_couluna++)
        {
            matriz[i_linha][i_couluna] = vetor[num_vetor];
            num_vetor++;
        }
    }
    for (int i_linha = 0; i_linha < 3; i_linha++)
    {
        for (int i_couluna = 0; i_couluna < 3; i_couluna++)
        {
            printf("[%d] ", matriz[i_linha][i_couluna]);
        }
        printf("\n");
    }
    return 0;
}