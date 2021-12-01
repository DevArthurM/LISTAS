#include <stdio.h>
#include <math.h>
int main(void)
{
    float imc, peso, altura;
    printf("Informe seu peso.\n\t");
    scanf("%f", &peso);
    printf("Informe sua altura\n\t");
    scanf("%f", &altura);
    imc = peso / pow(altura, 2);
    if (imc < 20)
    {
        printf("Abaixo do peso");
    }
    else if (imc >= 20 && imc <= 25)
    {
        printf("Abaixo do peso");
    }
    else if (imc >= 25 && imc <= 30)
    {
        printf("Abaixo do peso");
    }
    else if (imc >= 30 && imc <= 40)
    {
        printf("Obeso");
    }
    else if (imc > 40)
    {
        printf("Obeso Morbido");
    }
    return 0;
}
