#include <stdio.h>

int main(void){
    int n1, n2, n3;

    printf("Digite tres numeros inteiros para acharmos o maior: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1 > n2){
        if(n1 > n3){
            printf("O maior numero eh o %d", n1);
        }else{
            printf("O maior numero eh o %d", n3);
        }
    }else{
       if(n2 > n3){
            printf("O maior numero eh o %d", n2);
        }else{
            printf("O maior numero eh o %d", n3); 
        }
    }
    
    return 0;
}