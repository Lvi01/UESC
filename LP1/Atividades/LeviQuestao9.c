int main(void)
{
    int entrada, segundos, minutos, horas;

    printf("Diga a quantidade de segundos: ");
    scanf("%d", &entrada);


    minutos= entrada/60;

    if(minutos>=60)
        minutos-=60;

    horas= entrada/3600;
    segundos= entrada%60;

    printf("Horaio certo: %02d:%02d:%02d", horas, minutos, segundos);



    return 0;
}
