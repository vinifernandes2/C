#include <stdio.h>
int main(void){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 21){
        printf("Voce eh jovem");
    }else if(idade >= 21 && idade <=60){
        printf("Voce eh adulto");
    }else{
        printf("Voce eh idodo");
    }
        

    return 0;
}