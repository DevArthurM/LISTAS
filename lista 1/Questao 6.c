#include <stdio.h>

int main()
{
    float C, F;
    printf("Insira a temperatura em graus celsius.\t");
    scanf("%f", &C);
    F = (9 * C / 5) + 32;
    printf("O valor inserido em Fahrenheit é: %f \t", F);
}
