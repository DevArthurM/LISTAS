#include <stdio.h>
#include <stdbool.h>
int main()
{
    // Variavel
    int num, cont_num = 1, soma_num = 0;
    bool programa;
    do
    {
        // Colher dados
        printf("Informe um numero.\nNumero: ");
        scanf("%d", &num);
        if (num == -1)
        {
            printf("Progama encerrado.\n");
            programa = false;
        }
        else
        {
            programa = true;
        }
        // Processamento
        while (programa)
        {
            if (cont_num % 2 != 0)
            {
                soma_num = soma_num + cont_num;
                cont_num++;
            }
            else
            {
                cont_num++;
            }
            if (num == soma_num)
            {
                programa = false;
                printf("%d e um quadrado perfeito!\n", num);
                system("Pause");
                system("cls");
            }
            else if (num < soma_num)
            {
                printf("%d nao e quadrado perfeito!\n", num);
                programa = false;
                system("Pause");
                system("cls");
            }
        }
        cont_num = 1;
        soma_num = 0;
    } while (num != -1);
    return 0;
}