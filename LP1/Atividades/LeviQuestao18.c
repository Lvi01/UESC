int main(void)
{
    int in, aux1, n, fib[1000]={0, 1};

    printf("digite um numero: ");
    scanf("%d", &in);

    for(aux1=2; aux1<=in; aux1++){

        fib[aux1]= fib[aux1-1]+fib[aux1-2];

    }

    printf("%d ", fib[in-1]);

    return 0;
}
