int main(void)
{
    int in[10], maior1, maior2, aux1;

    printf("digite 10 numeros: ");

    for(aux1=0; aux1<10; aux1++){
        scanf("%d", &in[aux1]);
    }

    maior1=in[0]; maior2=in[0];

    for(aux1=1; aux1<10; aux1++){
        if(maior1<in[aux1])
            maior1=in[aux1];
    }

    for(aux1=1; aux1<10; aux1++){
        if(maior2<in[aux1] && in[aux1]!= maior1)
            maior2= in[aux1];
    }

    printf("Os maiores numeros sao: %d e %d", maior1, maior2);

    return 0;
}
