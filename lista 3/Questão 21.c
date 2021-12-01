#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Digite o valor de a:\n");
    scanf("%i", &a);
    printf("Digite o valor de b:\n");
    scanf("%i", &b);
    printf("Digite o valor de c:\n");
    scanf("%i", &c);
    if (a * a == b * b + c * c)
    {
        printf("Triangulo retangulo.");
    }
    else if (b * b == a * a + c * c)
    {
        printf("Triangulo retangulo.");
    }
    else if (c * c == b * b + a * a)
    {
        printf("Triangulo retangulo.");
    }
    else if (a * a < b * b + c * c)
    {
        printf("Triângulo acutângulo.");
    }
    else if (b * b < a * a + c * c)
    {
        printf("Triângulo acutângulo.");
    }
    else if (c * c < b * b + a * a)
    {
        printf("Triângulo acutângulo.");
    }
    else if (a * a > b * b + c * c)
    {
        printf("Triângulo obtusângulo");
    }
    else if (b * b > c * c + a * a)
    {
        printf("Triângulo obtusângulo");
    }
    else if (c * c > b * b + a * a)
    {
        printf("Triângulo obtusângulo");
    }
    return 0;
}
