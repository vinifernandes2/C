#include <stdio.h>
#include <math.h>


float DistanciaDoisPontos(int x1, int y1, int x2, int y2){
	return sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(void){
	int t, n, i;
	int xBranca, yBranca, x, y, posicao;
	float distancia, menorDistancia;
	
	scanf("%d", &t);
	
	while(t--){
		scanf("%d", &n);
		
		for(i = 0; i <= n; i++){

			if (i == 0){
				scanf("%d %d", &xBranca, &yBranca);
				continue;
			}
			
			scanf("%d %d", &x, &y);
			distancia = DistanciaDoisPontos(xBranca, yBranca, x, y);

			if (distancia < menorDistancia || i == 1){
				menorDistancia = distancia;
				posicao = i;
			}
		}
		
		printf("%d\n", posicao);
	}


    return 0;
}
