#include <stdio.h>
#include <math.h>

int main()
{
    int fx(int resp);
    int x;
    printf("Digite um valor para x: ");
    scanf("%i", &x);
    printf("Valor da funcao: %i", fx(x));
    return 0;
}

int fx(int resp)
{
    if (resp <= 1)
        return 1;
    else if (1 < resp && resp <= 2)
        return 2;
    else if (2 < resp && resp <= 3)
        return pow(resp, 2);
    else
        return pow(resp, 3);
    return 0;
}
