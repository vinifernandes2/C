#include <stdio.h>
#include "math.h"


int FuncaoDeRafael(int x, int y){
    int r = pow(3*x, 2) + pow(y, 2);
    return r;
}

int FuncaoDeBeto(int x, int y){
    int b = 2*pow(x, 2) + pow(5*y, 2);
    return b;
}

int FuncaoDeCarlos(int x, int y){
    return -100*x + pow(y, 3);
}

int main(void){
	int t, x, y;
	int rafael, beto, carlos;
	
	scanf("%d", &t);
	
	while(t--){
		scanf("%d %d", &x, &y);
		

		rafael = FuncaoDeRafael(x, y);
		beto = FuncaoDeBeto(x, y);
		carlos = FuncaoDeCarlos(x, y);
		
		if (rafael > beto && rafael > carlos){
			puts("Rafael ganhou");
		}else if (beto > rafael && beto > carlos){
			puts("Beto ganhou");
		}else if (carlos > rafael && carlos > beto){
			puts("Carlos ganhou");
		}else{
			puts("Empate");
		}
	}

	return 0;
}