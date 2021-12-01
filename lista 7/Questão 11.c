/*
11. Escreva um programa que exiba todos os números pares de 100 a 200, um em
cada linha.
*/
#include <stdio.h>

int main()
{
    int n = 99;
    for (int cont = 0; cont < 101; cont++)
    {
        n++;
        if(n % 2 == 0)
        {
            printf("|> %d\n",n);
        }
    }
    return 0;
}