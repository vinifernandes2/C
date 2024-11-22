#include <stdio.h>

int main(void)
{
    float altura, peso, imc;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = peso/(altura*altura);
    printf("Seu IMC eh: %f", imc);


    return 0;
}
