#include <stdio.h>
int main()
{
    //PRODUTOS
    float cachorro_quente = 0, hamburger = 0, cheeseburger = 0, eggcheeseburger = 0, refrigerante = 0;
    int num_cachorro_quente = 0, num_hamburger = 0, num_cheeseburger = 0, num_eggcheeseburger = 0, num_refrigerante = 0;
    //CODIGOS
    float valor_compra = 0;
    int opcao;
    //
    do
    {
        cachorro_quente = 1.50 * num_cachorro_quente;
        hamburger = 2 * num_hamburger;
        cheeseburger = 2.50 * num_cheeseburger;
        eggcheeseburger = 3 * num_eggcheeseburger;
        refrigerante = 1.50 * num_refrigerante;
        printf("\tF A C A  S U A  C O M P R A\n\n");
        printf("|1- Cachorro quente. (R$ 1,50)\n\tQUANTIDADE:%d\n\tVALOR:%.2f\n\n", num_cachorro_quente, cachorro_quente);
        printf("|2- Hamburguer. (R$ 2,50)\n\tQUANTIDADE:%d\n\tVALOR:%.2f\n\n", num_hamburger, hamburger);
        printf("|3- Cheeseburger. (R$ 2,50)\n\tQUANTIDADE:%d\n\tVALOR:%.2f\n\n", num_cheeseburger, cheeseburger);
        printf("|4- Eggcheeseburger. (R$ 3,00)\n\tQUANTIDADE:%d\n\tVALOR:%.2f\n\n", num_eggcheeseburger, eggcheeseburger);
        printf("|5- Refrigerante. (R$ 1,50)\n\tQUANTIDADE:%d\n\tVALOR:%.2f\n\n", num_refrigerante, refrigerante);
        printf("VALOR TOTAL DA COMPRA:R$%2.f\n\n", valor_compra);
        printf("|. 6- ENCERRAR PEDIDO.\n\n");
        printf("|. OPCAO: ");
        scanf("%i", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Quantos Cachorros quentes voce deseja?: ");
            scanf("%i", &num_cachorro_quente);
            valor_compra = valor_compra + (1.50 * num_cachorro_quente);
            system("cls");
            break;
        case 2:
            printf("Quantos Hamburguer's voce deseja?: ");
            scanf("%i", &num_hamburger);
            valor_compra = valor_compra + (2 * num_hamburger);
            system("cls");
            break;
        case 3:
            printf("Quantos Cheeseburguers voce deseja?: ");
            scanf("%i", &num_cheeseburger);
            valor_compra = valor_compra + (2.50 * num_cheeseburger);
            system("cls");
            break;
        case 4:
            printf("Quantos Eggcheeseburgers voce deseja?: ");
            scanf("%i", &num_eggcheeseburger);
            valor_compra = valor_compra + (3 * num_eggcheeseburger);
            system("cls");
            break;
        case 5:
            printf("Quantos Refrigerantes voce deseja?: ");
            scanf("%i", &num_refrigerante);
            valor_compra = valor_compra + (1.50 * num_refrigerante);
            system("cls");
            break;
        case 6:
            system("cls");
            printf("COMPRA FINALIZADA COM SUCESSO!\n");
            system("PAUSE");
            system("cls");
            break;
        default:
            system("cls");
            printf("ERRO! DIGITE UM CODIGO VALIDO.\n");
            system("PAUSE");
            system("cls");
            break;
        }
    } while (opcao != 6);
    printf("O VALOR TOTAL DA CONTA FICOU EM: R$%.2f\n", valor_compra);
    return 0;
}