#include <stdio.h>

int main(void)
{
    int num;
    printf("\nDigite um numero.\n");
    scanf("%i", &num);
    if (num > 9)
    {
        if (num == 10)
        {
            printf("Este numero e o 10");
        }
        else
        {
            printf("\nEste numero e maior que 10.\n");
        }
    }
    else
    {
        printf("\nEste numero e menor que 10.\n");
    }
    return 0;
}
