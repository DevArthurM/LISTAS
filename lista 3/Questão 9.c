#include <stdio.h>
int main(void)
{
    int senha, senhaconfirm;
    printf("Cadastre uma senha\n\nSenha:");
    scanf("%i", &senha);
    printf("Digite sua senha.\n\nSenha:");
    scanf("%i", &senhaconfirm);
    if (senha == senhaconfirm)
    {
        printf("Senha cadastrada!");
    }
    else
    {
        printf("Senha nao confere com a primeira senha digitada!\nEncerrando sistema...!");
    }
    return 0;
}
