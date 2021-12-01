#include <stdio.h>

int main()
{
    int A, B, TRO;
    printf("Digite o valor de A\n");
    scanf("%d", &A);
    printf("Digite o valor de B\n");
    scanf("%d", &B);
    TRO = A;
    A = B;
    B = TRO;
    printf("O valor de A é: %d\n", A);
    printf("O valor de B é: %d", B);
    return 0;
}
