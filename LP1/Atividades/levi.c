//ALUNO: LEVI SILVA FREITAS
//MATRICULA: 202210351
//DIA: 25/07/2022


//CONSTANTE USADA NAS MATRIZES:
#define TAM 10

//BIBLIOTECAS UTILIZADAS:
#include<strings.h>
#include<stdio.h>

//A BRINCADEIRA COMEÇA AQUI:
int main (void)
{
    //DECLARANDO AS VARIAVEIS UTILIZADAS E O STRUCT
    int DiaAtual, Auxiliar1, Auxiliar2=1, Auxiliar3=1, Auxiliar4=1, Contador=0;
    char Compara[TAM];

    struct meses {
        char NomeMes[TAM];
        char AbrevMes[TAM];
        int Dia;
        char NumMes[TAM];
    } Dados[11]=
        {"janeiro","jan", 31, "1",
        "fevereiro","fev", 28, "2",
        "marco","mar", 31, "3",
        "abril","abr", 30, "4",
        "maio","mai", 31, "5",
        "junho","jun", 30, "6",
        "julho","jul", 31, "7",
        "agosto","ago", 31, "8",
        "setembro","set", 30, "9",
        "outubro","out", 31, "10",
        "novembro","nov", 30, "11",
        "dezembro","dez", 31, "12",
        }; //INICIALIZANDO O STRUCT


    //ENTRADA DE DADOS:
    printf("\nDigite o mes: ");
    scanf("%[^\n]", Compara);
    scanf("%*[^\n]");
    scanf("%*c");

    printf("Agora digite o dia: ");
    scanf("%d%*c", &DiaAtual);

    system("Clear || cls");

    //VERIFICA SE OS DIAS FAZEM SENTIDO:
    while(DiaAtual<1 || DiaAtual>31){
        printf("Esse dia nao existe");
        printf("\nDigite o dia novamente: ");
        scanf("%d", &DiaAtual);
        scanf("%*[^\n]");
        scanf("%*c");

        system("Clear || cls");
    }

    //TESTE ----- APAGAR DEPOIS -----
    printf("DIA: %d", Dados[11].Dia);
    printf("\nMES: %s", Compara);
    printf("\nCONTADOR: %d", Contador);
    printf("ABREVMES: %s", Dados[11].AbrevMes);
    printf("\nTESTE DO DIA: %d", Dados[11].Dia);

    //É ONDE A MAGICA ACONTECE, EU UTILIZO AS AUXILIARES2-4 PARA COMPARAR A ENTRADA COM OS DADOS DA STRUCT
    //A CADA LOOP OS DIAS SAO SOMADOS ATE ENCONTRAR O MES DIGITADO, UMA VEZ ENCONTRADO O LOOP É ENCERRADO
    for(Auxiliar1=0; Auxiliar1<11; Auxiliar1++){
        Auxiliar2 = strcmp(Compara, Dados[Auxiliar1].NomeMes);
        Auxiliar3 = strcmp(Compara, Dados[Auxiliar1].AbrevMes);
        Auxiliar4 = strcmp(Compara, Dados[Auxiliar1].NumMes);
            if(Auxiliar2==0 || Auxiliar3==0 || Auxiliar4==0)
                break;
        Contador += Dados[Auxiliar1].Dia;
    }

    //ULTIMA OPERAÇÃO ANTES DE PRINTAR O RESULTADO
    //AQUI EU ADICIONO OS DIAS DO MES ATUAL AO DIAS DOS MESES ATERIORES
    Contador += DiaAtual;

    //SAIDA DE DADOS
    printf("\nContador de dias: %d", Contador);

    return 0;
}
