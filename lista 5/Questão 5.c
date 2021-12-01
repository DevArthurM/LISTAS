#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a, b, teste_valor = 1;
    while (teste_valor)
    {
        printf("Digite um valor inicial.");
        scanf("%i", &a);
        printf("Digite um valor final.");
        scanf("%i", &b);
        if(a > b)
        {
            printf("Seu valor nao e válido!\nTente novamente!\n\n");
        }else
        {
            teste_valor = 0;
        }
    }
    while (b >= a)
    {
        printf("%i\n", a);
        a++;
    }
    return 0;
}
