#include <stdio.h>
int main()
{
    float fat, n, opc = 1;
    while (opc == 1)
    {
        printf("Insira um valor para calcular o fatorial: ");
        scanf("%f", &n);
        fat = 1;
        while (n > 1)
        {
            fat = fat * n;
            n = n - 1;
        }
        printf("\nFatorial: %.0f\n", fat);
        opc = 0;
        printf("Deseja continuar?\n1-SIM\n2-NAO\n");
        scanf("%f",&opc);
        if (opc == 0)
        {
            printf("Progama encerrado.");
            system("pause");
        }else{
            fat = 1;
        }
        system("cls");
    }
    return 0;
}

