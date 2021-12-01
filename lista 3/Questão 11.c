#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("Digite um valor para A: \n");
    scanf("%i", &a);
    printf("Digite um valor para B: \n");
    scanf("%i", &b);
    printf("Digite um valor para C: \n");
    scanf("%i", &c);
    if (a > b && a > c)
    {
        printf("A e o maior numero.");
    }
    else if (b > a && b > c)
    {
        printf("B e o maior numero.");
    }
    else if (c > a && c > b)
        ;
    {
        printf("C e o maior numero.");
    }
    return 0;
}
