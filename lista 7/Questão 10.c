/*10. Escreva um algoritmo que leia um conjunto de N números inteiros e mostre qual
foi o maior e o menor e o maior valor fornecido.*/

#include <stdio.h>

int main()
{
    int n_repetir, n, n_maior, n_menor;
    printf("Digite quantos numeros deseja ler.\n");
    scanf("%d", &n_repetir);
    for (int cont = 0; cont < n_repetir; cont++)
    {
        printf("Numero %d: \n", cont + 1);
        scanf("%d", &n);
        if (cont == 1)
        {
            n_maior = n;
            n_menor = n;
        }
        else
        {
            n > n_maior ? n_maior = n : NULL;
            n < n_menor ? n_menor = n : NULL;
        }
    }
    printf("Numero maior: %d\n", n_maior);
    printf("Numero menor: %d\n", n_menor);
    return 0;
}