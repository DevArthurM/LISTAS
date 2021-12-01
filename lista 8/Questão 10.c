#include <stdio.h>
#include <math.h>

int main()
{
    float Vetor[10];
    Vetor[0] = 1;
    for (int cont = 1; cont < 10; cont++)
    {
        if (cont % 2 == 0)
        {
            Vetor[cont] = cont * 3 / 5;
        }
        else
        {
            Vetor[cont] = pow(cont, 2);
        }
    }
    for (int cont = 0; cont < 10; cont++)
    {
        printf("|> %.2f\n",Vetor[cont]);
    }
    return 0;
}