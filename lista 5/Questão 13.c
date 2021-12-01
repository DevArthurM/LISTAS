#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int numero_usuario, numero_computador, max = 10, min = 0, correcao_usuario;
    srand(time(NULL));
    bool questionario_numero = true, questionario_usuario = true, questionario_usuario1 = true;
    while (questionario_numero)
    {
        printf("Informe o numero que o computador deve adivinhar entre 0 e 10.\nNumero:");
        scanf("%i", &numero_usuario);
        if (numero_usuario >= 0 && numero_usuario <= 10)
        {
            questionario_numero = false;
        }
        else
        {
            printf("Numero fora do intervalo, Digite um numero valido.\n");
        }
        system("cls");
    }
    while (questionario_usuario1)
    {
        numero_computador = min + rand() % (max - min) + 1;
        while (questionario_usuario)
        {
            printf("Numero: %i\nO numero escolhido e:\n 1- Maior\n 2- Menor\n 3- O numero correto.\n Alternativa:", numero_computador);
            scanf("%d", &correcao_usuario);
            switch (correcao_usuario)
            {
            case 1:
                min = numero_computador;
                questionario_usuario = false;
                break;
            case 2:
                max = numero_computador;
                questionario_usuario = false;
                break;
            case 3:
                printf("Computador acertou o numero %d, com sucesso!\n", numero_usuario);
                questionario_usuario = false;
                questionario_usuario1 = false;
                system("PAUSE");
                break;
            default:
                printf("Alternativa errada.\n");
                questionario_usuario1 = false;
                system("PAUSE");
                break;
            }
        }
        system("cls");
        questionario_usuario = true;
    }
    return 0;
}
