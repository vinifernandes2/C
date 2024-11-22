#include <stdio.h>

int main(void)
{
    float n1, n2, n3, n4, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota nota: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    media = (n1*1 + n2*2 + n3*3 + n4*4)/10;
    printf("Sua media eh igual a: %f", media);

    return 0;
}