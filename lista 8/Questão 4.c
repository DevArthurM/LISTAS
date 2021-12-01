#include <stdio.h>
int main()
{
    char Vet1[10], Vet2[10];
    int quantidade_de_elementos = 0;
    printf("Digite a primeira sequencia.\n");
    for (int cont = 0; cont < 10; cont++)
    {
        scanf(" %c", &Vet1[cont]);
    }
    printf("Digite a segunda sequencia.\n");
    for (int cont = 0; cont < 10; cont++)
    {
        scanf(" %c", &Vet2[cont]);
    }
    for (int cont = 0; cont < 10; cont++)
    {
        if (Vet1[cont] == Vet2[cont])
        {
            quantidade_de_elementos++;
        }
    }
    printf("A quantidade de valores com o mesmo endereco e mesmo valor e %d.",quantidade_de_elementos);
    return 0;
}
