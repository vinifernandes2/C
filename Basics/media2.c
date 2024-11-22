#include <stdio.h>
int main(void){

    float n1ip, n1lp, n2ip, n2lp, n3ip, n3lp;
    float n1, n2, n3, media;

    printf("Digite as notas da primeiro unidade: ");
    scanf("%f%f", &n1ip, &n1lp);
    printf("Digite as notas da segunda unidade: ");
    scanf("%f%f", &n2ip, &n2lp);
    printf("Digite as notas da terceira unidade: ");
    scanf("%f%f", &n3ip, &n3lp);

    if(n1ip > n1lp){
        n1 = (6*n1ip + 4*n1lp)/(6 + 4);
    }else{
        n1 = (6*n1lp + 4*n1ip)/(6 + 4);
    }

    if(n2ip > n2lp){
        n1 = (6*n2ip + 4*n2lp)/(6 + 4);
    }else{
        n1 = (6*n2lp + 4*n2ip)/(6 + 4);
    }

    if(n3ip > n3lp){
        n1 = (6*n1ip + 4*n1lp)/(6 + 4);
    }else{
        n1 = (6*n3lp + 4*n3ip)/(6 + 4);
    }

    media = n1 + n2 + n3 / 3;
    printf("Sua media foi: %f\n", media);
    printf("Seu conceito eh: ");

    if(media >= 9){
        printf("A");
    }else if(media >= 8){
            printf("B");
    }else if(media >= 7){
            printf("C");
    }else if(media >= 6){
            printf("D");
    }else if(media >= 5){
            printf("E");
    }else{
        printf("F");
    }

    return 0;
}