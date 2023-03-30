int main(void)
{
    int a, b, c;

    printf("digite os lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a<b+c && b<a+c && c<a+b){
        if(a==b==c)
            printf("Os lados formam um triangulo equilatero");
        else if(a==b || b==c)
            printf("Os lados formam um triangulo isoceles");
            else
                printf("Os lados formam um triangulo escaleno");
    }

    else
        printf("Os lados nao formam um triangulo");



    return 0;
}
