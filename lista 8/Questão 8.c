#include <stdio.h>

int main()
{
    float notas[10], media;
    int alunos_fora_da_media = 0;
    printf("Digite as notas de uma turma com 10 pessoas.\n\n\t\tNOTAS\n");
    for (int cont = 0; cont < 10; cont++)
    {
        printf("|> ");
        scanf("%f", &notas[cont]);
        if (notas[cont] >= 0 && notas[cont] <= 10)
        {
            media += notas[cont];
        }
        else
        {
            cont--;
            printf("Digite um valor valido\n");
        }
    }
    media = media / 10;
    printf("A media e: %.2f\n\n", media);
    for (int cont = 0; cont < 10; cont++)
    {
        if (notas[cont] < media)
        {
            alunos_fora_da_media++;
        }
    }
    printf("Alunos fora da media: %d\n\n",alunos_fora_da_media);
    return 0;
}