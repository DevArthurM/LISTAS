#include <stdio.h>
int main()
{
    int n, op;
    printf("Digite um valor entre 0 e 5.\n");
    scanf("%i", &n);
    printf("Deseja ver o numero em:\n1-ingles\n2-portugues");
    scanf("%i", &op);
    switch (n)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        if (op == 1)
        {
            printf("One");
        }
        else if (op == 2)
        {
            printf("Um");
        }
        else
        {
            printf("Digite um valor correto para a linguagem.");
        }
        break;
    case 2:
        if (op == 1)
        {
            printf("Two");
        }
        else if (op == 2)
        {
            printf("Dois");
        }
        else
        {
            printf("Digite um valor correto para a linguagem.");
        }
        break;
    case 3:
        if (op == 1)
        {
            printf("Trhee");
        }
        else if (op == 2)
        {
            printf("Tres");
        }
        else
        {
            printf("Digite um valor correto para a linguagem.");
        }
        break;
    case 4:
        if (op == 1)
        {
            printf("Four");
        }
        else if (op == 2)
        {
            printf("Quatro");
        }
        else
        {
            printf("Digite um valor correto para a linguagem.");
        }
        break;
    case 5:
        if (op == 1)
        {
            printf("Five");
        }
        else if (op == 2)
        {
            printf("Cinco");
        }
        else
        {
            printf("Digite um valor correto para a linguagem.");
        }
        break;
    default:
        printf("Digite um numero valido");
        break;
    }
    return;
}
