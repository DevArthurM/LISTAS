#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, cal;
    printf("Escreva um numero.");
    scanf("%i", &n);
    if (n >= 0)
    {
        cal = sqrt(n);
        printf("A raiz quadrada é: %i", cal);
    }
    else
    {
        cal = pow(n, 2);
        printf("O quadrado do numero e:%i", cal);
    }
    return 0;
}
