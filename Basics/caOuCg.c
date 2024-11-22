#include <stdio.h>

int main(void){
    char p;
    int t1, r, n; 
    int soma, t, i;
 
    printf("Digite 'a' para Progressao Aritmetica ou 'g' para Progressao geometrica: ");
    scanf("%c", &p);
    printf("Digite o primeiro termo da progressao: ");
    scanf("%d", &t1);
    printf("Digite uma razao para a progressao: ");
    scanf("%d", &r);
    printf("Digite a quantidade de termos para a progressao: ");
    scanf("%d", &n);

    soma = 0;
    t = t1;
    for(i=1; i<=n; i++){   
        printf("Termo %d: %d\n", i, t);
        soma = soma + t;
        if(p == 'a'){
            t = t + r;
        }else{
            t = t * r;
        }
    }
    printf("Soma dos termos: %d", soma);

    return 0;
}