#include <stdio.h>
#define n 4
int main()
{
    int vetor_1[n], vetor_2[n], vetor_3[n];
    printf("| Digite o primeiro vetor.\n");
    for (int cont = 0; cont < n; cont++)
    {
        printf("|> ");
        scanf("%d", &vetor_1[cont]);
    }
    printf("| Digite o segundo vetor.\n");
    for (int cont = 0; cont < n; cont++)
    {
        printf("|> ");
        scanf("%d", &vetor_2[cont]);
    }
    printf("| Terceiro vetor.\n");
    for(int cont = 0; cont < n; cont++)
    {
        vetor_3[cont] = vetor_1[cont] + vetor_2[cont];
    }
    for (int cont = 0; cont < n; cont++)
    {
        printf("|> %d\n", vetor_3[cont]);
    }
    return 0;
}