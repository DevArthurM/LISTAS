#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Escreva o numero.\t");
    scanf("%i", &n);
    switch (n)
    {
    case 5:
        printf("%i e um dos numeros\n", n);
        break;
    case 200:
        printf("%i e um dos numeros\n", n);
        break;
    case 500:
        printf("%i e um dos numeros\n", n);
        break;
    }
    if (n >= 500 && n <= 1000)
    {
        printf("%i esta no intervalo entre 500 e 1000\n", n);
    }
    else
    {
        printf("%i nao esta no intervalo entre 500 e 1000\n", n);
    }
    return 0;
}
