#include <stdio.h>

    int main(void){

        char sexo;
        float h, p;

        printf("Digite 'm' para sexo masculino ou 'f' para sexo feminino: ");
        scanf("%c", &sexo);

        printf("Digite sua altura em metro: ");
        scanf("%f", &h);

        if(sexo == 'm'){
            p = (72.7*h) - 58;
            printf("Seu peso ideal eh: %f", p);
        }
        if(sexo == 'f'){
            p = (62.1*h) - 44.7;
            printf("Seu peso ideal eh: %f", p);
        }

        return 0;
    }
