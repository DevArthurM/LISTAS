#include <stdio.h>

int main()
{
    int seq1[5], seq2[5], resultado[5] = {0}, res = 0;
    printf("Digite a primeira sequencia\n");
    for (int cont = 0; cont < 5; cont++)
    {
        scanf("%d", &seq1[cont]);
    }
    printf("Digite a segunda sequencia\n");
    for (int cont = 0; cont < 5; cont++)
    {
        scanf("%d", &seq2[cont]);
    }
    for (int cont = 0; cont < 5; cont++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (seq1[cont] == seq2[i])
            {
                resultado[res] = seq1[cont];
                res++;
            }
        }
    }
    printf("Terceira sequencia:\n\n");
    printf("[");
    for (int cont = 0; cont < 5; cont++)
    {
        if (cont != 4)
        {
            printf("%d,", resultado[cont]);
        }
        else
        {
            printf("%d", resultado[cont]);
        }
    }
    printf("]\n\n\n\n");
    return 0;
}