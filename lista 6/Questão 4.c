#include <stdio.h>
#include <stdbool.h>
int main()
{
    char escolha;
    float valor = 0, valorvariante;
    bool programa = true;
    do
    {
        printf("Opcoes:\n");
        printf("|. (a) - Consultar saldo\n");
        printf("|. (b) - Saque\n");
        printf("|. (c) - Deposito\n");
        printf("|. (d) - Sair\n");
        printf("|. >");
        scanf(" %c", &escolha);
        switch (escolha)
        {
        case 'a':
        case 'A':
            printf("Seu saldo e de RS %.2f\n", valor);
            system("PAUSE");
            system("cls");
            break;
        case 'b':
        case 'B':
            printf("Quanto deseja sacar?\n\tRS: ");
            scanf("%f", &valorvariante);
            if (valor < valorvariante)
            {
                printf("Saldo insuficiente.\n");
                system("PAUSE");
                system("cls");
            }
            else
            {
                valor = valor - valorvariante;
                system("cls");
            }
            break;
        case 'c':
        case 'C':
            printf("Quanto deseja depositar?\n\tRS: ");
            scanf("%f", &valorvariante);
            valor = valor + valorvariante;
            system("cls");
            break;
        case 'd':
        case 'D':
            system("cls");
            printf("Programa encerrado.\n");
            programa = false;
            break;
        default:
            printf("\nERRO!\nDigite uma opcao valida.\n");
            system("PAUSE");
            system("cls");
            break;
        }
    } while (programa);
    return 0;
}