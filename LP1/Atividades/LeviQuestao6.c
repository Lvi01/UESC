#include <stdio.h>
#include <stdlib.h>

#define TAM 50

int main(void)
{
    char resposta;
    int quantidade=10000, aux1=0, aux2;
    float porcentagemH, porcentagemM, porcentagemR;

    struct alunos{
        char nome[TAM], sexo, situacao;
    } aluno[quantidade];

    printf("Adicionar aluno (S ou N): ");
    scanf("%c", &resposta);
    fflush(stdin);

    while(resposta!='S' && resposta!='N'){
            printf("ERRO: ENTRADA INVALIDA\n");
            printf("Digite a resposta novamente(S ou N): ");
            scanf("%c", &resposta);
            fflush(stdin);
        }

    system("cls");

    while(resposta!='N'){

        printf("Digite o nome do aluno: ");
        scanf("%[^\n]", aluno[aux1].nome);
        fflush(stdin);

        printf("Digite o seu sexo(H ou M): ");
        scanf("%[^\n]", &aluno[aux1].sexo);
        fflush(stdin);

        while(aluno[aux1].sexo!='H' && aluno[aux1].sexo!='M'){
            printf("ERRO: ENTRADA INVALIDA\n");
            printf("Digite o sexo do aluno novamente(H ou M): ");
            scanf("%[^\n]", &aluno[aux1].sexo);
            fflush(stdin);
        }

        printf("Digite se ele foi aprovado ou reprovado(A ou R): ");
        scanf("%[^\n]", &aluno[aux1].situacao);
        fflush(stdin);

        while(aluno[aux1].situacao!='A' && aluno[aux1].situacao!='R'){
            printf("ERRO: ENTRADA INVALIDA\n");
            printf("Digite a situacao novamente(H ou M): ");
            scanf("%[^\n]", &aluno[aux1].situacao);
            fflush(stdin);
        }

        aux1++;

        printf("\nAdicionar aluno (S ou N): ");
        scanf("%c", &resposta);
        fflush(stdin);

        while(resposta!='S' && resposta!='N'){
            printf("ERRO: ENTRADA INVALIDA\n");
            printf("Digite a resposta novamente(S ou N): ");
            scanf("%c", &resposta);
            fflush(stdin);
        }

        system("cls");

    }

    for(aux2=0; aux2<aux1; aux2++){

        if(aluno[aux2].sexo=='H')
            porcentagemH++;
        else
            porcentagemM++;

        if(aluno[aux2].situacao=='R')
            porcentagemR++;
    }


    printf("PORCENTAGEM HOMEM: %.2f %%\n", porcentagemH/aux1*100);
    printf("PORCENTAGEM MULHER: %.2f %%\n", porcentagemM/aux1*100);
    printf("PORCENTAGEM REPROVADOS: %.2f %%\n", porcentagemR/aux1*100);


    return 0;
}
