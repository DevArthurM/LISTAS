#include <stdio.h>
#include <math.h>

int main(void)
{
    int L, A, P;
    printf("Informe o lado do quadrado.");
    scanf("%i", &L);
    A = pow(L, 2);
    P = L * 4;
    printf("A area do quadrado e %i e o perimetro e %i.", A, P);
    return 0;
}
