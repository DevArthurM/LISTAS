#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("Digite um valor para A.\n");
    scanf("%i", &a);
    printf("Digite um valor para B.\n");
    scanf("%i", &b);
    printf("Digite um valor para C.\n");
    scanf("%i", &c);
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
    return 0;
}
