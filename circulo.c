#include <stdio.h>

int main(void){

    float diametro, area, raio, circuferencia;

    printf("Digite o diametro: ");
    scanf("%f", &diametro);

    raio = diametro/2;
    area = 3.14 * (raio*raio);
    circuferencia = 2 * (3.14*raio);

    printf("O raio eh igual a: %f\nA area eh igual a: %f\nA circuferencia eh igual a: %f", raio, area, circuferencia);


    return 0;
}
