#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Escreva o primeiro numero.\t");
    scanf("%i", &n);
    if (n > 21 && n < 89)
    {
        printf("%i esta no intervalo", n);
    }
    else
    {
        printf("%i nao esta no intervalo", n);
    }
    return 0;
}
