int main(void)
{
    int in, c, v, d, u;

    printf("Digite o valor: ");
    scanf("%d", &in);

    c=in/50;
    in= in%50;
    v=in/20;
    in= in%20;
    d= in/10;
    in= in%10;
    u= in/1;

    printf("Seu valor pode ser pago com %d Cinquenta, %d Vinte, %d Dez, %d Um", c, v, d, u);



    return 0;
}
