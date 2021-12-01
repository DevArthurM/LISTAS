#include <stdio.h>
int main()
{
    int n;
    printf("Digite um valor entre 0 e 5.\n");
    scanf("%i", &n);
    switch (n)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("Um");
        break;
    case 2:
        printf("Dois");
        break;
    case 3:
        printf("Tres");
        break;
    case 4:
        printf("Quatro");
        break;
    case 5:
        printf("Cinco");
        break;
    default:
        printf("Digite um numero valido");
        break;
    }
    return;
}
