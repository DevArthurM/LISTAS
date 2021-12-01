#include <stdio.h>
#include <math.h>

int main(void)
{
    int quantconv, quantconvl;
    float custoespec, precoconv;
    // Coleta
    printf("Informe o custo do espetaculo.\n");
    scanf("%f", &custoespec);
    printf("Informe o custo do convite.\n");
    scanf("%f", &precoconv);
    // Processamento
    quantconv = custoespec / precoconv;
    quantconvl = quantconv * 123 / 100;
    // Exibir
    printf("A quantidade de convites que devem ser vendidos para que pelo menos o custo do espetaculo seja alcancado.\n%i convites", quantconv);
    printf("\nA quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.\n%i convites", quantconvl);
    return 0;
}
