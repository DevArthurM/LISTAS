#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, num_sort;
    srand(time(NULL));
    num_sort = rand() % 100;
    while (num != num_sort)
    {
        printf("Adivinhe o numero sorteado entre 0 e 100.\nNumero: ");
        scanf("%i", &num);
        if (num > num_sort)
        {
            printf("Seu numero e maior que o numero sorteado, tente novamente.\n");
        }
        else if (num < num_sort)
        {
            printf("Seu numero e menor que o numero sorteado, tente novamente.\n");
        }
        else
        {
            printf("Bravo! Voce acertou!\n");
        }
    }
    return 0;
}
