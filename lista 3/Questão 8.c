#include <stdio.h>
int main(void)
{
    int n;
    printf("Digite o numero.\nnumero:");
    scanf("%i", &n);
    if (n % 10 == 0)
    {
        printf("E divisivel por 10\n");
    }
    else
    {
        printf("Nao e divisivel por 10\n");
    }
    if (n % 5 == 0)
    {
        printf("E divisivel por 5\n");
    }
    else
    {
        printf("Nao e divisivel por 5\n");
    }
    if (n % 2 == 0)
    {
        printf("E divisivel por 2\n");
    }
    else
    {
        printf("Nao e divisivel por 2\n");
    }
    return 0;
}
