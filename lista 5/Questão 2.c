#include <stdio.h>
int main()
{
    int numero, pares = 0, impares = 0, mediageral, vezes = 0, somageral = 0;
    while (numero != 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        somageral = somageral + numero;
        if (numero == 0)
        {
            printf("Progama encerrado.\n");
        }
        else if (numero % 2 == 0)
        {
            pares++;
            vezes++;
        }
        else
        {
            impares++;
            vezes++;
        }
    }
    mediageral = somageral / vezes;
    printf("Quantidade de numeros impares: %d\n", impares);
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Media: %d", mediageral);
    return 0;
}
