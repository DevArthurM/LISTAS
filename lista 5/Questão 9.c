#include <stdio.h>
#include <stdbool.h>
int main()
{
    char nome[10], opc;
    bool control = true, controlnota1 = true, controlnota2 = true;
    float nota1, nota2, media, nul;
    while (control)
    {
        printf("Digite o nome do aluno.\n");
        scanf("%s", &nome);
        while (controlnota1)
        {
            printf("Digite a primeira nota.\n");
            scanf("%f", &nota1);
            if (nota1 < 0 || nota1 > 10)
            {
                printf("DIGITE UMA NOTA VALIDA!\n");
                system("pause");
            }
            else
            {
                controlnota1 = false;
            }
        }
        while (controlnota2)
        {
            printf("Digite a segunda nota.\n");
            scanf("%f", &nota2);
            if (nota1 < 0 || nota1 > 10)
            {
                printf("DIGITE UMA NOTA VALIDA!\n");
                system("pause");
            }
            else
            {
                controlnota2 = false;
            }
        }
        media = (nota1 + nota2) / 3;
        printf("O aluno %s tem uma media: %.2f\n\n", nome, media);
        printf("Deseja continuar? (s/n)\n");
        scanf("%s", &opc);
        switch (opc)
        {
        case 's':
        case 'S':
            controlnota1 = true;
            controlnota2 = true;
            break;
        case 'n':
        case 'N':
            control = false;
            printf("Progama encerrado.\n");
            break;
        default:
            printf("Codigo errado,progama encerrado.\n");
            control = false;
            break;
        }
    }
    return 0;
}
