#include <stdio.h>

int main(void){
    int n, soma, i;
    float media;

    printf("Digite o numero: ");
    scanf("%d", &n);

    soma = n;
    i = 0;
    while(n != 0){
        i = i + 1;
        printf("Continue digitando: ");
        scanf("%d", &n);
        soma = soma + n;
    }

    if(i > 0){
        media = (1.0*soma)/i;
        printf("A media dos numeros foi de: %f", media);
    }
    
    return 0;
}