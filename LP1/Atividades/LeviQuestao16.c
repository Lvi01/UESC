int main(void)
{
    float x, y;

    printf("Digite dois pontos: ");
    scanf("%f %f", &x, &y);

    if(x>0){
        if(y>0)
            printf("Esta no primeiro quadrante");
        else
            printf("Esta no segundo quadrante");
    }
    else{
        if(y>0)
            printf("Esta no quarto quadrante");
        else
            printf("Esta no terceiro quadrante");
    }



    return 0;
}
