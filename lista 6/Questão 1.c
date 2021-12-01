#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int num, total = 0, cont = 0, media;
    bool rodando = true;
    do
    {
        printf("Digite um numero: ");
            scanf("%d", &num);
        if (num == -1)
        {
            rodando = false;
        }
        else
        {
            total = total + num;
            cont++;
        }
    } while (rodando);
    media = total / cont;
    printf("A media entre seus numeros e: %d", media);
    return 0;
}