#include <stdio.h>
#include <stdlib.h>

#define DOBRO 2
#define PI 3.14

int main (void)
{

    float Raio;

    printf("Digite o raio do seu circulo: ");
    scanf("%f", &Raio);

    while(Raio<=0){
        printf("ERRO: VALOR INVALIDO");
        printf("\nDigite o raio do seu circulo novamente: ");
        scanf("%f", &Raio);

        system("cls");

    }

    printf("\nO diametro do seu circulo e: %.2f", Raio*DOBRO);
    printf("\nA circunferencia do seu circulo e: %.2f", DOBRO*Raio*PI);

    return 0;
}
