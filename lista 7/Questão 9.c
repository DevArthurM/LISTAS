/*
9. Elabore um programa que calcule N! (Fatorial de N), sendo que o valor inteiro de N
é fornecido pelo usuário. Sabendo que: N! = 1 x 2 x 3 x ... x (N-1) x N e que 0! = 1,
por definição.
*/

#include <stdio.h>

int main()
{
    int n;
    double fat = 1;
    printf("Digite o valor de N: ");
    scanf("%i", &n);
    for (int cont = 0; cont < n; cont++)
    {
        fat = fat * (double)(n - cont);
    }
    printf("\nO fatorial de N:  %lf", fat);
    return 0;
}