#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, contador;

	srand(time(NULL));
	correto = rand() % 100;

    contador = 0;
	palpite = -1;
	while (palpite != correto){
        contador++;
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);

            if (palpite > correto){
                puts("Palpite alto!");
            }else if (palpite < correto){
                puts("Palpite foi baixo!");
            }
	}

    puts("Voce acertou!");
    printf("Quantidade de palpites: %d", contador);
	return 0;
}