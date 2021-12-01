#include <stdio.h>
int main()
{
    int vezes = 0, homem = 0, mulher = 0, idade;
    char opc;

    while (vezes != 5)
    {
        printf("Pessoa numero %i\n", vezes+1);
        printf("Homem - (H/h)\nMulher - (M/m)\nSexo:");
        scanf("%s", &opc);
        switch (opc)
        {
        case 'h':
        case 'H':
            printf("Digite a idade: ");
            scanf("%i", &idade);
            if (idade >= 18)
            {
                homem++;
            }
            vezes++;
            break;
        case 'm':
        case 'M':
            printf("Digite a idade: ");
            scanf("%i", &idade);
            if (idade >= 18)
            {
                mulher++;
            }
            vezes++;
            break;
        default:
            printf("Digite opcao valida\n\n\n");
            system("pause");
            break;
        }
        system("cls");
    }
    printf("Pessoas maiores de idade.");
    printf("Mulheres:%i\n", mulher);
    printf("Homem:%i\n", homem);
    return 0;
}
