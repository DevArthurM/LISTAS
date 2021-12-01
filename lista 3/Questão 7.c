#include <stdio.h>
#include <math.h>

int main(void)
{
    float saldomed, cred;
    printf("Informe o seu saldo medio por ano.\n");
    scanf("%f", &saldomed);
    if (saldomed < 200)
    {
        printf("Voce nao possui credito.");
    }
    else if (saldomed >= 201 && saldomed <= 401)
    {
        cred = saldomed * 0.2;
        printf("O valor do seu credito e de: R$ %.2f", cred);
    }
    else if (saldomed >= 401 && saldomed <= 600)
    {
        cred = saldomed * 0.3;
        printf("O valor do seu credito e de: R$ %.2f", cred);
    }
    else
    {
        cred = saldomed * 0.4;
        printf("O valor do seu credito e de: R$ %.2f", cred);
    }
    return 0;
}
