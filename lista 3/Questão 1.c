#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    printf("Digite um numero\n");
    scanf("%i", &N);
    if (N == 0)
    {
        printf("Numero nulo.");
    }
    else
    {
        if (N % 2 == 0)
        {
            printf("Seu numero e par.\n");
        }
        else
        {
            printf("Seu numero e impar.\n");
        }
        if (N < 0)
        {
            printf("Seu numero e negativo.\n");
        }
        else
        {
            printf("Seu numero e positivo.\n");
        }
    }
    return 0;
}
