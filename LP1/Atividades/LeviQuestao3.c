#include <stdio.h>
#include <stdlib.h>

#define DOBRO 2
#define TRIPLO 3

int main (void)
{
    float Numero;

    printf("Digite um numero: ");
    scanf("%f", &Numero);

    printf("\nO dobro do seu numero e: %.2f", Numero*DOBRO);
    printf("\nO triplo do seu numero e: %.2f", Numero*TRIPLO);
    printf("\nA metade do seu numero e: %.2f", Numero/DOBRO);
    printf("\nO triplo da metade do seu numero e: %.2f", Numero/DOBRO*TRIPLO);

    return 0;
}
