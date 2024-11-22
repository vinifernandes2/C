#include <stdio.h>

int main(void){
    float peso, altura, imc;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    if (imc <= 18.5){
        printf("Baixo peso\n");
    }else if (imc <= 25){
            printf("Normal\n");
    }else if (imc <= 30){
            printf("Sobrepeso\n");
    }else{
        printf("Obesidade\n");
    }

    return 0;
}