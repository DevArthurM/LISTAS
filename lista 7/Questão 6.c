/*
Escreva um algoritmo que calcule e escreva a soma dos dez primeiros termos da
seguinte série:
2/500 – 5/450 + 2/400 – 5/350 + …
*/

#include <stdio.h>
int main()
{
    int divisor = 550;
    float soma = 0;
    for (int cont = 1; cont <= 10; cont++)
    {
        if (cont % 2 == 0)
        {
            divisor -= 50;
            soma += 5.0 / divisor;
            printf("5/%d + ",divisor);
        }
        else
        {
            divisor -= 50;
            soma -= 2.0 / divisor;
            printf("2/%d - ",divisor);
        }
    }
    printf("\n\nO valor da soma das divisoes e: %f",soma);
    return 0;
}