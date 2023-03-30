/*QUESTAO 31

ALUNO: LEVI SILVA FREITAS
MATRICULA: 202210351

COM BASE NA QUESTAO, MEU PROGAMA RESOLVE:

"Usando estas informações, pretende-se saber a hora, com aproximação aos minutos,
em que o volume de médio tráfego ultrapassa 5000 veículos por hora,
considerando amostras de 10 minutos. Também se pretende saber qual o período de 10
minutos com mais tráfego."

OBS: SO USEI A TABELA PARA VER O FUNCIONAMENTO DO CODIGO,
NAO GARANTO O ALINHAMENTO DELA KKKKKK.
 */

#include <stdio.h>
#include <stdlib.h>

#define DEZ 10
#define META 5000 //RECOMENDO ABAIXAR A META PARA VER O FUNCIONAMENTO DA SEGUNDA RESPOSTA

int main(void)
{
    int Hora, Minuto, Quantidade[6][24]={0}, Aux1, Aux2, Aux3, MaiorIntervalo=0, Aux4;
    float VolumeMedio[24]={0};
    char Resposta;

    printf("ADICIONAR HORARIO? (S ou N)\n");
    scanf("%c", &Resposta);

    system("cls");

    while(Resposta != 'N'){

        printf("HORARIO REGISTRADO (EX: 19:45): \n");
        scanf("%d%*c%d", &Hora, &Minuto);

        system("cls");

        while(Hora<0 || Hora>24){

            printf("ERRO: HORA INVALIDA");
            printf("\nHORA REGISTRADA: \n");
            scanf("%d", &Hora);
        }

        while(Minuto<0 || Minuto>60){

            printf("ERRO: MINUTO INVALIDO");
            printf("\nMINUTO REGISTRADO: \n");
            scanf("%d", &Minuto);
        }

        system("cls");

        for(Aux1=0; Aux1<24; Aux1++){

                if(Hora==Aux1){

                Aux2= Minuto/DEZ;
                Quantidade[Aux2][Aux1]+=1;
                VolumeMedio[Aux1]+=1;
                }
        }

        fflush(stdin);
        printf("HORARIO REGISTRADO: %2d:%2d\n", Hora, Minuto);
        printf("\n");

        for(Aux1=0; Aux1<6; Aux1++){

            printf("Intervalo %2d - %2d: ", Aux1*DEZ, Aux1*DEZ+9);

            for(Aux2=0; Aux2<24; Aux2++){

                printf("%2d ", Quantidade[Aux1][Aux2]);

                if(MaiorIntervalo<Quantidade[Aux1][Aux2]){

                    MaiorIntervalo= Quantidade[Aux1][Aux2];
                    Aux3= Aux1;
                    Aux4= Aux2;
                }

            }

            printf("\n");
        }

        printf("\nTOTAL: ");

        for(Aux1=0; Aux1<24; Aux1++)
            printf("%.2f ", VolumeMedio[Aux1]);

        printf("\n\nRESPOSTAS:\nO INTERVALO MAIS MOVIMENTADO E: %2d - %2d mins da hora %d com um total de %d carros.\n", Aux3*DEZ, Aux3*DEZ+9, Aux4, Quantidade[Aux3][Aux4]);
        printf("Hora(s) com mais de 5000 carros de volume medio: ");

        for(Aux1=0; Aux1<24; Aux1++){

                if((VolumeMedio[Aux1])/6 >= META)
                    printf("%2d ", Aux1);

        }

        printf("\n\nADICIONAR OUTRO HORARIO? (S ou N)\n");
        scanf("%c", &Resposta);
        scanf("%*c");

        system("cls");

    }

    return 0;
}
