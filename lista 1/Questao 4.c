#include <stdio.h>
int main()
{
    char nome[15];
    int n1, n2, n3, media;
    printf("Informe o nome do aluno:\n");
    scanf("%s", &*nome);
    printf("Informe a primeira nota.\n");
    scanf("%d", &n1);
    printf("Informe a segunda nota.\n");
    scanf("%d", &n2);
    printf("Informe a terceira nota.\n");
    scanf("%d", &n3);
    media = n1 + n2 + n3;
    printf("A média do aluno(a) %s é %d", nome, media / 3);
    return 0;
}
