#include <stdio.h>
#include <math.h>

int main()
{
    int mesd;
    char mes;
    float valor, multa;
    printf("Digite um valor para a asociacao.\nR$ ");
    scanf("%f", &valor);
    printf("Digite o mes desejado.\n");
    printf("0  -  Janeiro\n");
    printf("1  -  Fevereiro\n");
    printf("2  -  Marco\n");
    printf("3  -  Abril\n");
    printf("4  -  Maio\n");
    printf("5  -  Junho\n");
    printf("6  -  Julho\n");
    printf("7  -  Agosto\n");
    printf("8  -  Setembro\n");
    printf("9  -  Outubro\n");
    printf("10 -  Novembro\n");
    printf("11 -  Dezembro\n");
    scanf("%i", &mesd);
    switch (mesd)
    {
    case 0:
        mes = "Janeiro";
        break;
    case 1:
        mes = "Fevereiro";
        break;
    case 2:
        mes = "Marco";
        break;
    case 3:
        mes = "Abril";
        break;
    case 4:
        mes = "Maio";
        break;
    case 5:
        mes = "Junho";
        break;
    case 6:
        mes = "Julho";
        break;
    case 7:
        mes = "Agosto";
        break;
    case 8:
        mes = "Setembro";
        break;
    case 9:
        mes = "Outubro";
        break;
    case 10:
        mes = "Novembro";
        break;
    case 11:
        mes = "Dezembro";
        break;
    default:
        printf("Codigo invalido.Tente novamente!\n");
        return 0;
    }
    multa = (pow(0.05, mesd) * valor) + valor;
    printf("O valor da multa em %c: \nR$ %2.f", mes, multa);
    return;
}
