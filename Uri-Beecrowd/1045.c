#include <stdio.h>

int main()
{
    double a, b, c;
    double temp;

    scanf("%lf%lf%lf", &a, &b, &c);

    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a < c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b < c){
        temp = b;
        b = c;
        c = temp;
    }

    if(a >= b+c)printf("NAO FORMA TRIANGULO\n");
    else{
        if(a*a == b*b + c*c)printf("TRIANGULO RETANGULO\n");
        if(a*a > b*b + c*c)printf("TRIANGULO OBTUSANGULO\n");
        if(a*a < b*b + c*c)printf("TRIANGULO ACUTANGULO\n");
    }
        if(a == b && a == c && b == c)printf("TRIANGULO EQUILATERO\n");
        else{
            if(a == b || a == c || b == c)printf("TRIANGULO ISOSCELES\n");
        }

    return 0;
}
