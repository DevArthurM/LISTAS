#include <stdio.h>
int main(void)
{
    int escolha, cand1 = 0, cand2 = 0;
    do
    {
        printf("Escolha seu voto:\n");
        printf("1- Candidato 1. votos: %d\n",cand1);
        printf("2- Candidato 2. votos: %d\n",cand2);
        printf("3- Nulo.\n");
        printf("4- Encerrar votacao.\n");
        printf("Seu voto:");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 1:
            cand1++;
            break;
        case 2:
            cand2++;
            break;
        case 3:
            break;
        case 4:
            if (cand1 > cand2)
            {
                printf("Candidato 1 venceu nos votos.\n");
            }
            else if (cand1 < cand2)
            {
                printf("Candidato 2 venceu nos votos.\n");
            }
            else
            {
                printf("Empate entre os candidatos.\n");
            }
            system("Pause");
            break;
        default:
            printf("ERRO!Digite uma opcao valida\n");
            system("Pause");
            break;
        }
        system("cls");
    } while (escolha != 4);
    return 0;
}