#include <math.h>

int main(void)
{
    float x1, x2, a, b, c, delta;

    printf("Digite os valores de a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);

    delta= pow(b, 2)-4*a*c;

    if(sqrt(delta)<0)
        printf("Nao existem raizes");

    else{

    x1= (-b + sqrt(delta))/(2*a);
    x2= (-b - sqrt(delta))/(2*a);

    printf("Raizes: %.2f, %.2f", x1, x2);

    }

    return 0;
}
