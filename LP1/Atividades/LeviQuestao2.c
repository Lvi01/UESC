#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main (void)
{
    int Auxiliar;
    float Nota[TAM], Media;

    printf("\nBOLETIM\nINSIRA AS NOTAS DOS ALUNOS");

    for(Auxiliar=0; Auxiliar<TAM; Auxiliar++){

    printf("\n%d. Informe a Nota %d: ", Auxiliar+1, Auxiliar+1);
    scanf("%f", &Nota[Auxiliar]);
    Media+=Nota[Auxiliar]/TAM;

    }

    system("cls");

    printf("\tBOLETIM");
    printf("\nRESULTADO");
    printf("\nMEDIA FINAL: %.2f", Media);

    if(Media<7)
        printf("\nSITUACAO: Reprovado");
    else
        printf("\nSITUACAO: Aprovado");

    return 0;
}
