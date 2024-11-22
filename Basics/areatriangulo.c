#include <stdio.h>

int main(void)
{
    int b, h;
    float area;

    printf("Digite o valor da base: ");
    scanf("%d", &b);

    printf("Digite o valor da altura: ");
    scanf("%d", &h);

    area = (b*h)/2;
    printf("A area do triangulo eh: %f", area);

    return 0;
}