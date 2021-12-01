#include <stdio.h>
int main()
{
    int base, expoente, cont;
    printf("Informe a base: \n");
    scanf("%i", &base);
    printf("Informe o expoente: \n");
    scanf("%i", &expoente);
    cont = base;
    do
    {
        cont = cont * base;
        expoente--;
    } while (expoente > 1);
    printf("O resultado e: %d\n", cont);
    return 0;
}