/*
7. Escreva um programa que leia um conjunto de N números inteiros e mostre qual
foi o maior valor fornecido.
*/

#include <stdio.h>

int main()
{
    int numero, vezes_repetir, maior_numero = 0;
    printf("Digite quantos numeros deseja ler.\nQUANTIDADE NUMEROS: ");
    scanf("%d", &vezes_repetir);
    for (int cont = 1; cont <= vezes_repetir; cont++)
    {
        printf("Digite o numero.");
        scanf(" %d", &numero);
        numero > maior_numero ? maior_numero = numero : NULL;
    }
    printf("\n\nO maior numero informado e %d",maior_numero);
    return 0;
}S