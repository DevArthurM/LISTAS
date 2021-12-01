#include <stdio.h>
int main()
{
    char nome[10], opc;
    int control = 1;
    float nota1, nota2, media;
    while (control == 1)
    {
        printf("Digite o nome do aluno.\n");
        scanf("%s", &nome);
        printf("Digite a primeira nota.\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota.\n");
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 3;
        printf("O aluno %s tem uma media: %.2f\n\n", nome, media);
        printf("Deseja continuar? (s/n)\n");
        scanf("%s", &opc);
        switch (opc)
        {
        case 's':
            break;
        case 'S':
            break;
        case 'n':
            control = 0;
            printf("Progama encerrado.\n");
            break;
        case 'N':
            control = 0;
            printf("Progama encerrado.\n");
            break;
        default:
            printf("Codigo errado,progama encerrado.\n");
            control = 0;
            break;
        }
    }
    return 0;
}
