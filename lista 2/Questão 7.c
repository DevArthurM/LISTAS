#include <stdio.h>

int main(void)
{
    float pre, pref;
    printf("Informe o valor do produto.\n");
    scanf("%f", &pre);
    pref = pre * 0.91;
    printf("O valor final do produto e: %.2f", pref);
    return 0;
}
