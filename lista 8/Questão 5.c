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
    for(int cont = 0; cont < 5; cont++)
    {
        if (Vet1[0] == Vet2[cont])
        {
            num_iguais++;
        }
    }
    printf("Numero de vezes que se repete: %d",num_iguais);
    return 0;
}