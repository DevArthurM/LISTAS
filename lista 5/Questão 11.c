#include <stdio.h>
int main()
{
    int comeco, fim, numero_principal, enclemento;
    printf("Entre com o valor do divisor:");
    scanf("%i", &numero_principal);
    printf("Inicio do intervalo:");
    scanf("%i", &comeco);
    printf("Final do intervalo:");
    scanf("%i", &fim);
    enclemento = comeco;
    printf("Os numeros divisiveis por %i no intervalo entre %i e %i sao:", numero_principal, comeco, fim);
    while (enclemento != fim)
    {
        if (enclemento % numero_principal == 0)
        {
            printf("\t%d", enclemento);
        }
        enclemento++;
    }
    printf(".");
    return 0;
}
