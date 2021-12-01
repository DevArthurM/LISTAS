#include <stdio.h>
#include <math.h>

int main(void)
{
    int A, B, C, D, R, S;
    printf("Escolha um valor para A.\n");
    scanf("%i", &A);
    printf("Escolha um valor para B.\n");
    scanf("%i", &B);
    printf("Escolha um valor para C.\n");
    scanf("%i", &C);
    R = pow(A + B, 2);
    S = pow(B + C, 2);
    D = (R + S) / 2;
    printf("O valor de D e %i.", D);
    return 0;
}
