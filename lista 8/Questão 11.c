#include <stdio.h>
#include <math.h>
int main()
{
    float numbers[50];
    numbers[0] = 100;
    numbers[49] = 100;
    for(int cont = 1; cont <= 48; cont++)
    {
        numbers[cont] = pow(cont - 1,2)+sqrt(cont + 1);
    }
    printf("| Numeros gerados.\n");
    for(int cont = 0; cont < 50; cont++)
    {
        printf("|> %.2f\n",numbers[cont]);
    }
    return 0;
}