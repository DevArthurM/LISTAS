#include <stdio.h>

int main()
{
    int Vetor[5], positivos[5] = {0}, negativos[5] = {0};
    printf("Digite 5 valores\n");
    for(int cont = 0; cont < 5; cont++)
    {
        printf("|> ");
        scanf("%d",&Vetor[cont]);
    }
    for(int cont = 0; cont < 5; cont++)
    {
        if(Vetor[cont] >= 0)
        {
            positivos[cont] = Vetor[cont];
        }
        else
        {
            negativos[cont] =  Vetor[cont];
        }
    }
    printf("Numeros positivos.\n");
    for(int cont = 0; cont < 5; cont++)
    {
        printf("|> %d\n",positivos[cont]);
    }
    printf("Numeros negativos.\n");
    for(int cont = 0; cont < 5; cont++)
    {
        printf("|> %d\n",negativos[cont]);
    }
    return 0;
}