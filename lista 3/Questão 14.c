#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, a, b, c;
    printf("Digite o valor de i:\n");
    scanf("%i", &i);
    printf("Digite o valor de a:\n");
    scanf("%i", &a);
    printf("Digite o valor de b:\n");
    scanf("%i", &b);
    printf("Digite o valor de c:\n");
    scanf("%i", &c);

    switch (i)
    {
    case 1:
        if (a < b && b < c)
        {
            printf("%i,%i,%i", a, b, c);
        }
        else if (a < c && c < b)
        {
            printf("%i,%i,%i", a, c, b);
        }
        else if (b < a && a < c)
        {
            printf("%i,%i,%i", b, a, c);
        }
        else if (b < c && c < a)
        {
            printf("%i,%i,%i", b, c, a);
        }
        else if (c < a && a < b)
        {
            printf("%i,%i,%i", c, a, b);
        }
        else if (c < b && b < a)
        {
            printf("%i,%i,%i", c, b, a);
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
        else if (c > a && a > b)
        {
            printf("%i,%i,%i", c, a, b);
        }
        else if (c > b && b > a)
        {
            printf("%i,%i,%i", c, b, a);
        }
    case 3:
        if (a > b && a > c)
        {
            printf("%i,%i,%i", b, a, c);
        }
        else if (b > a && b > c)
        {
            printf("%i,%i,%i", a, b, c);
        }
        else
        {
            printf("%i,%i,%i", a, c, b);
        }
        break;
    default:
        printf("Opcao invalida.");
        break;
    }
    return 0;
}
