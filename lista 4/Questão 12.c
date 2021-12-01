#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, resp;
    printf("Digite um valor para A.\n A: ");
    scanf("%i", &a);
    printf("Digite um valor para B.\n A: ");
    scanf("%i", &b);
    printf("Digite um valor para C.\n A: ");
    scanf("%i", &c);
    printf("Qual operacao dejeja usar?\n\n");
    printf("1- escrever os tres valores a, b, c em ordem crescente.\n");
    printf("2- escrever os tres valores a, b, c em ordem decrescente.\n");
    printf("3- escrever os tres valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.\n");
    scanf("%i", &resp);
    switch (resp)
    {
    case 1:
        if (a > b && b > c)
        {
            printf("%i,%i,%i", c, b, a);
        }
        else if (a > c && c > b)
        {
            printf("%i,%i,%i", b, c, a);
        }
        else if (b > a && a > c)
        {
            printf("%i,%i,%i", c, a, b);
        }
        else if (b > c && c > a)
        {
            printf("%i,%i,%i", a, c, b);
        }
        else if (c > b && b > a)
        {
            printf("%i,%i,%i", a, b, c);
        }
        else
        {
            printf("%i,%i,%i", b, a, c);
        }
        break;
    case 2:
        if (a > b && b > c)
        {
            printf("%i,%i,%i", a, b, c);
        }
        else if (a > c && c > b)
        {
            printf("%i,%i,%i", a, c, b);
        }
        else if (b > a && a > c)
        {
            printf("%i,%i,%i", b, a, c);
        }
        else if (b > c && c > a)
        {
            printf("%i,%i,%i", b, c, a);
        }
        else if (c > b && b > a)
        {
            printf("%i,%i,%i", c, b, a);
        }
        else
        {
            printf("%i,%i,%i", c, a, b);
        }
        break;
    case 3:
        if (a > b && b > c)
        {
            printf("%i,%i,%i", b, a, c);
        }
        else if (a > c && c > b)
        {
            printf("%i,%i,%i", c, a, b);
        }
        else if (b > a && a > c)
        {
            printf("%i,%i,%i", a, b, c);
        }
        else if (b > c && c > a)
        {
            printf("%i,%i,%i", c, b, a);
        }
        else if (c > b && b > a)
        {
            printf("%i,%i,%i", b, c, a);
        }
        else
        {
            printf("%i,%i,%i", a, c, b);
        }
        break;
    default:
        printf("Digite uma opcao valida.");
        break;
    }
    return 0;
}
