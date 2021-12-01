#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Digite um valor para A: \n");
    scanf("%i", &a);
    printf("Digite um valor para B: \n");
    scanf("%i", &b);
    if (a % b == 0)
    {
        printf("Os numeros %i e %i sao multiplos.", a, b);
    }
    else
    {
        printf("Os numeros %i e %i nao sao multiplos.", a, b);
    }
    return 0;
}
