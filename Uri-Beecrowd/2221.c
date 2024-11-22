#include <stdio.h>


double ValorGolpe(int ataque, int defesa, int nivel, int bonus){
    double v;

    v = (ataque + defesa) / 2;
    v += (nivel % 2 == 0) ? bonus : 0;

    return v;
}

int main(void){
	int t, bonus;
	int ataqueD, defesaD, nivelD;
	int ataqueG, defesaG, nivelG;
	
	scanf("%d", &t);
	
	while(t--){
		scanf("%d", &bonus);
		scanf("%d %d %d", &ataqueD, &defesaD, &nivelD);
		scanf("%d %d %d", &ataqueG, &defesaG, &nivelG);
		

		if (ValorGolpe(ataqueD, defesaD, nivelD, bonus) > ValorGolpe(ataqueG, defesaG, nivelG, bonus)){
			puts("Dabriel");
		}else if (ValorGolpe(ataqueG, defesaG, nivelG, bonus) > ValorGolpe(ataqueD, defesaD, nivelD, bonus)){
			puts("Guarte");
		}else{
			puts("Empate");
		}
	}


    return 0;
}
