#include <stdio.h>
#include <math.h>

int main(void)
{
    int n1, n2, Res;
    printf("Escreva o primeiro numero.\t");
    scanf("%i", &n1);
    printf("Escreva o segundo numero.\t");
    scanf("%i", &n2);
    Res = n1 + n2;
    if (Res > 20)
    {
        Res = n1 + n2 + 8;
        printf("O resultado e: %i", Res);
    }
    else
    {
        Res = n1 + n2 - 5;
        printf("O resultado e:%i", Res);
    }
    return 0;
}
