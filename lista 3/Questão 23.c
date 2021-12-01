#include <stdio.h>
#include <math.h>

int main()
{
    int gotas(int pesog, int idadeg);
    int idade, peso, ngotas;
    printf("Informe a idade do paciente.\n");
    scanf("%i", &idade);
    printf("Informe o peso do paciente.\n");
    scanf("%i", &peso);
    ngotas = gotas(peso, idade) / 25;
    printf("O paciente deve tomar %i gotas", ngotas);
    return 0;
}
int gotas(int pesog, int idadeg)
{
    if (idadeg > 12 || pesog >= 60)
        return 1000;
    else if (idadeg > 12 || pesog < 60)
        return 875;
    else if (idadeg < 12)
    {
        if (pesog >= 5 && pesog <= 9)
            return 125;
        if (pesog >= 9.1 && pesog <= 16)
            return 250;
        if (pesog >= 16.1 && pesog <= 24)
            return 375;
        if (pesog >= 24.1 && pesog <= 30)
            return 500;
    }
    else
        return 750;
}
