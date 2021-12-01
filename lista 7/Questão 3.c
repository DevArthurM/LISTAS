/*3. Escreva um programa que leia o valor de N, determine e imprima o valor de H, dado
pela série a seguir:
H = 1 - 1/2 + 1/3 - 1/4 + ... + 1/N*/

#include <stdio.h>
int main()
{
    int N,cont;
    float H = 0;
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    for (cont = 1; cont <= N; cont++)
    {
        if (cont % 2 == 0)
        {
            H = H - 1.0/cont;
        }
        else
        {
            H = H + 1.0/cont;
        }
    }
    printf("O valor de H e: %f",H);
    return 0;
}