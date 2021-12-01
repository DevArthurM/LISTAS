#include <stdio.h>
int main()
{
    float peso_de_cada_pessoa, media_peso = 0;
    int numero_pessoas;
    printf("Digite o numero de pessoas a serem pesadas\n");
    scanf("%d", &numero_pessoas);
    for (int cont = 0; numero_pessoas > cont; cont++)
    {
        printf("Digite o peso da pessoa %d\n",cont + 1);
        scanf("%f",&peso_de_cada_pessoa);
        media_peso = media_peso + peso_de_cada_pessoa;
    }
    media_peso = media_peso/numero_pessoas;
    printf("A media de peso de cada pessoa e:%.2f \n",media_peso);
    return 0;
}