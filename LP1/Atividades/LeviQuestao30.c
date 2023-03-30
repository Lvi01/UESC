#include <stdio.h>
#include <stdlib.h>

#define TAM 25

int main (void)
{
    char Nome[TAM], Telefone[TAM];

    printf("\nCADASTRO\nINSIRA SEUS DADOS");

    printf("\n1. Informe seu nome: ");
    scanf("%[^\n]s", Nome);
    scanf("%*[^\n]s");
    scanf("%*c");

    printf("2. Informe seu numero para contato: ");
    scanf("%[^\n]", Telefone);
    scanf("%*[^\n]s");
    scanf("%*c");

    system("cls");

    printf("\tCADASTRO");
    printf("\nINFORMACOES DO USUARIO");
    printf("\nNOME: %s", Nome);
    printf("\nTELEFONE: %s\n\n\n", Telefone);

    return 0;
}
