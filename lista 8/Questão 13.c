#include <stdio.h>
//constantes
#define n 5
int main()
{
    int vetor_1[n], vetor_2[n], resul[n];
    char codigo[n];
    printf("|> Digite o primeiro vetor.\n");
    for (int cont = 0; cont < n; cont++)
    {
        printf("|> ");
        scanf("%d", &vetor_1[cont]);
    }
    printf("|> Digite o segundo vetor.\n");
    for (int cont = 0; cont < n; cont++)
    {
        printf("|> ");
        scanf("%d", &vetor_2[cont]);
    }
    printf("|> Digite os codigos para o terceiro vetor.\n");
    for (int cont = 0; cont < n; cont++)
    {
        printf("|> ");
        scanf(" %c", &codigo[cont]);
    }
    printf("|\n");
    printf("|Terceiro vetor\n");
    printf("|Codigo\t|Resultado.\n");
    for (int cont = 0; cont < n; cont++)
    {
        resul[cont] = vetor_1[cont] * vetor_2[cont];
    }
    for (int cont = 0; cont < n; cont++)
    {
        printf("|>%c\t|%d\n",codigo[cont],resul[cont]);
    }
    return 0;
}