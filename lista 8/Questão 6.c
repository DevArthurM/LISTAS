#include <stdio.h>

int main()
{
    int Vet1[5], Vet2[5], num_iguais = 0;
    printf("Digite o primeiro vetor.\n");
    for (int cont = 0; cont < 5; cont++)
    {
        scanf(" %d", &Vet1[cont]);
    }
    printf("Digite o segundo vetor.\n");
    for (int cont = 0; cont < 5; cont++)
    {
        scanf(" %d", &Vet2[cont]);
    }
    for (int cont = 0; cont < 5; cont++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (Vet1[cont] == Vet2[i])
            {
                num_iguais++;
            }
        }
        printf("Numero de vezes que %d se repete: %d\n",Vet1[cont], num_iguais);
        num_iguais = 0;
    }
    return 0;
}