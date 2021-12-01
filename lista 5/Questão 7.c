#include <stdio.h>
int main()
{
    char nome[10];
    int control = 1;
    float nota1, nota2, media;
    while (control <= 3)
    {
        printf("Digite o nome do aluno.\n");
        scanf("%s", &nome);
        printf("Digite a primeira nota.\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota.\n");
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 3;
        printf("O aluno %s tem uma media: %.2f\n\n", nome, media);
        control++;
    }
    return 0;
}

