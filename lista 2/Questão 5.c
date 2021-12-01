#include <stdio.h>

int main(void)
{
    int Horas, Min, Seg;
    printf("Digite quantos segundos durou o evento\t");
    scanf("%i", &Seg);
    Horas = Seg / 3600;
    Seg = Seg % 3600;
    Min = Seg / 60;
    Seg = Seg % 60;
    printf("O evento durou %i horas %i minutos e %i segundos.", Horas, Min, Seg);
    return 0;
}
