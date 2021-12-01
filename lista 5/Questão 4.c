#include <stdio.h>
int main()
{
    int diainicial, mesinicial, anoinicial,cont = 0,dias;
    printf("Infome a data inicial.\n");
    scanf("%d/%d/%d", &diainicial, &mesinicial, &anoinicial);
    printf("Me fale o numero de dias.\n");
    scanf("%d", &dias);
    while (dias != cont)
    {
        if (mesinicial == 1 || mesinicial == 3 || mesinicial == 5 || mesinicial == 7 || mesinicial == 8 || mesinicial == 10 || mesinicial == 12)
        {
            if (mesinicial == 12 && diainicial == 31)
            {
                anoinicial++;
                mesinicial = 1;
                diainicial = 1;
            }
            else if (diainicial == 31)
            {
                mesinicial++;
                diainicial = 1;
            }
            else
            {
                diainicial++;
            }
        }
        else if (mesinicial == 4 || mesinicial == 6 || mesinicial == 9 || mesinicial == 11)
        {
            if (diainicial == 30)
            {
                mesinicial++;
                diainicial = 1;
            }else
            {
                diainicial++;
            }
        }
        else if (mesinicial == 2 && anoinicial % 4 != 0)
        {
            if (diainicial == 28)
            {
                mesinicial++;
                diainicial = 1;
            }
            else
            {
                diainicial++;
            }
        }
        else if (mesinicial == 2 && anoinicial % 4 == 0)
        {
            if (diainicial == 29)
            {
                mesinicial++;
                diainicial = 1;
            }
            else
            {
                diainicial++;
            }
        }
        cont++;
    }
    printf("%d/%d/%d\n", diainicial, mesinicial, anoinicial);
    return 0;
}
