#include <stdio.h>

int main()
{
    int vetor[10], soma_valores = 0;
    printf("DIGITE 10 NUMEROS.\n");
    for (int cont = 0; cont < 10; cont++)
    {
        printf("|> ");
        scanf("%d", &vetor[cont]);
    }
    for (int cont = 0; cont < 10; cont++)
    {
        if (cont % 2 != 0)
        {
            soma_valores += vetor[cont];
        }
    }
    printf("A soma dos valores dos indices impares e : %d", soma_valores);
    return 0;
}