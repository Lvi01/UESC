int main(void)
{
    int in;

    printf("Digite o numero: ");
    scanf("%d", &in);

    for(; in!=0;){
        printf("%d", in%10);
        in = in/10;
    }




    return 0;
}
