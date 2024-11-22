#include <stdio.h>

int main(void){
    int n, maior, menor, primeiraVez;

    n = -1;
    primeiraVez = 1;
    while(n != 0){
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(primeiraVez == 1){
            maior = n;
            menor = n;
            primeiraVez = 0;
        }
        if(n > maior && n != 0){
            maior = n;
        }
        
        if(n < menor && n != 0){
            menor = n;
        }

    }
    printf("O maior numero eh: %d\nO menor numero eh %d", maior, menor);

    return 0;
}