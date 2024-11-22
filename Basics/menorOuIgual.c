#include <stdio.h>

int main(void){
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if(n1 == n2){
        printf("Os dois numeros sao iguais");
    }else{
        if(n1 > n2){
            printf("%f", n2);
        }else{
            printf("%f", n1);
        }

    }
    return 0;
}