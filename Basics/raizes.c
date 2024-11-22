#include <stdio.h>
#include <math.h>
    int main(void)
    {
        float a, b, c, delta, x1, x2;

        printf("Digite os valores de a, b e c, repectivamente: ");
        scanf("%f%f%f", &a, &b, &c);

        if(a == 0){
            printf("Essa equacao nao eh do segundo grau");
            return 1;
        }else{
            delta = b*b - 4*a*c;
        }

        if(delta < 0){
            printf("Essa equacao nao possui raizes reais");
            return 2;
        }else{
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("As raizes da equacao sao: %f e %f", x1, x2);
        }

        return 0;
    }