#include <stdio.h>
int main()
{
    int sexo, idade, idade_mulheres = 0, homens = 0, mulheres = 0, media_idade = 0;
    float peso, peso_homens = 0, media_peso = 0;
    for (int cont = 1; cont <= 4; cont++)
    {
        printf("Qual o sexo da pessoa?\n1-Homem\n2-Mulher\nEscolha: ");
        scanf("%d", &sexo);
        switch (sexo)
        {
        case 1:
            printf("Digite o peso da pessoa: ");
            scanf("%f", &peso);
            peso_homens += peso;
            homens++;
            system("cls");
            break;
        case 2:
            printf("Digite a idade da pessoa: ");
            scanf("%d", &idade);
            idade_mulheres += idade;
            mulheres++;
            system("cls");
            break;
        default:
            system("cls");
            printf("ERROR!\n\nDigite um valor valido!\n");
            cont--;
            system("pause");
            system("cls");
            break;
        }
    }
    homens == 0 ? homens++ : NULL;
    mulheres == 0 ? mulheres++ : NULL;
    media_idade = idade_mulheres / mulheres;
    media_peso = peso_homens / homens;
    printf("O peso medio dos homens e de: KG %.2f\n", media_peso);
    printf("A idade media das mulheres e de: %d anos.\n", media_idade);
    return 0;
}