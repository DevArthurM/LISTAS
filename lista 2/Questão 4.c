#include <stdio.h>

int main(void)
{
    float n1, n2, n3, media;
    printf("Infome a nota da n1:\t");
    scanf("%f", &n1);
    printf("Infome a nota da n2:\t");
    scanf("%f", &n2);
    printf("Infome a nota da n3:\t");
    scanf("%f", &n3);
    media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
    printf("Sua media foi %.2f.", media);
    return 0;
}
