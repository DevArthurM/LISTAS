#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    //variaveis
    bool teste = true;
    int num = 0, intervalo = 1, cont = 0, cont_teste = 1;
    float resto_div;
    //processamento
    printf("  Numeros primos entre 1 e 150\n________________________________\n");
    while (cont_teste <= 150)
    {
        num++;
        while (intervalo <= num)
        {
            resto_div = num % intervalo;
            intervalo++;
            if (resto_div == 0)
            {
                cont++;
            }
        }
        if (cont == 2 || cont == 1)
        {
            printf("|. %d\n", num);
        }
        cont = 0;
        intervalo = 1;
        cont_teste++;
    }
    return 0;
}
