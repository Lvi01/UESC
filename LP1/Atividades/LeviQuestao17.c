int main(void)
{
    int in, aux1;
    float total, k;

    printf("digite um numero: ");
    scanf("%d", &in);

    for(aux1=1, total=0; aux1<=in; aux1++){

        if(aux1%2 != 0)
            k= (float)aux1/(aux1*aux1);
        else
            k= -(float)aux1/(aux1*aux1);

        total+=k;

    }

    printf("TOTAL: %.2f", total);


    return 0;
}
