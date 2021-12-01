#include <stdio.h>
int main()
{
    float med, a, b;
    printf("Digite a primeira nota.\n");
    scanf("%f", &a);
    printf("Digite a segunda nota.\n");
    scanf("%f", &b);
    med = a + b / 2;
    if (med >= 0.0 && med <= 4.0)
    {
        printf("Reprovado.");
    }
    else if (med >= 4.1 && med <= 7.0)
    {
        printf("Exame");
    }
    else if (med >= 7.1 && med <= 10)
    {
        printf("Aprovado.");
    }else{
        printf("ERRO!");
    }
    return 0;
}
