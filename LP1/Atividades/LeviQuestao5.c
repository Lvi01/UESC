#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main (void)
{
    int Meses;
    float CapitalInicial, CapitalFinal, Rendimento, Parcela;

    printf("Informe seu saldo inicial: ");
    scanf("%f", &CapitalInicial);


    printf("Quantidade de meses que ele rendeu: ");
    scanf("%d", &Meses);

    while(Meses>12 || Rendimento<0){
        printf("ERRO: VALOR INVALIDO");
        printf("\nDigite a quantidade de meses que ele rendeu novamente: ");
        scanf("%d", &Meses);

        system("cls");

    }

    system("cls");

    printf("Informe qual a porcentagem de rendimento mensal");
    printf("\n(Exemplo: 16 %% = 0.16; 50 %% = 0.5; 86 %% = 0,86)");
    printf("\nAssim, taxa de rendimento mensal: ");
    scanf("%f", &Rendimento);

    while(Rendimento>1 || Rendimento<0){
        printf("ERRO: VALOR INVALIDO");
        printf("\nDigite a taxa de rendimento mensal novamente: ");
        printf("\n(Exemplo: 16 = 0.16; 50%% = 0.5; 86%% = 0,86)");
        scanf("%f", &Rendimento);

        system("cls");

    }

    system("cls");

    Parcela = CapitalInicial*Rendimento;
    printf("T: %f", Parcela);

    for(CapitalFinal=CapitalInicial; Meses>0; Meses--){
        CapitalFinal += Parcela;
        }


    printf("\nSeu saldo final e: %.2f", CapitalFinal);

    return 0;
}
