#include <stdio.h>
int main()
{
    int vVetor[9];
    //scanf's
    for (int cont = 0; cont < 9; cont++)
    {
        printf("Digite o numero: ");
        scanf("%d", &vVetor[cont]);
    }
    // Teste de par ou impar.
    printf("\n\nNumeros impares e suas respectivas posicoes.\n");
    for (int cont = 0; cont < 9; cont++)
    {
        if(vVetor[cont] % 2 != 0)
        {
            printf("Numero %d posicao [%d]\n",vVetor[cont],cont);
        }
    }
    return 0;
}