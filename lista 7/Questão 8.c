/*
Num frigorífico existem 90 bois. Cada boi traz em seu pescoço um cartão contendo
seu número de identificação e seu peso. Fazer um algoritmo que escreva o número
e o peso do boi mais gordo e do boi mais magro.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int peso, id_leve, id_pesado, mais_pesado = 0, mais_leve = 999;
    for (int cont = 1; cont <= 90; cont++)
    {
        peso = 500 + (rand() % 500);
        printf("|.\n|. Boi:%d\n|. kg %d\n", cont, peso);
        if (peso > mais_pesado)
        {
            mais_pesado = peso;
            id_pesado = cont;
        }
        else if (peso < mais_leve)
        {
            mais_leve = peso;
            id_leve = cont;
        }
    }
    printf("|________________\n|> O boi mais leve e o boi %d, pesando kg %d\n|________________",id_leve,mais_leve);
    printf("|________________\n|> O boi mais pesado e o boi %d, pesando kg %d\n|________________",id_pesado,mais_pesado);
    return 0;
}