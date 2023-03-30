#include <stdio.h>

#define A 20

int main(void)
{
    int pontuacao;

    struct equipe{
        char nome[A];
        int vitorias, derrotas, empates;
    } equipe;

    printf("Digite o nome do time: ");
    scanf("%[^\n]", equipe.nome);
    fflush(stdin);

    printf("Digite quantas vitorias ele teve: ");
    scanf("%d", &equipe.vitorias);

    printf("Digite quantos empates ele teve: ");
    scanf("%d", &equipe.empates);

    printf("Digite quantas derrotas ele teve: ");
    scanf("%d", &equipe.derrotas);

    pontuacao= equipe.vitorias*3 - equipe.derrotas*3;

    printf("PONTUACAO FINAL: %d", pontuacao);

    return 0;
}
