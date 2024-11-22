#include <stdio.h>
#include <math.h>


int EhPrimo(int n){
	int i;
	double raizDeN = sqrt(n);
	
	for(i = 2; i <= raizDeN; i++){
		if (n % i == 0){
			return 0;
		}
	}
	
	return 1;
}

int main(void){
	int t;
	int n;

	scanf("%d", &t);
	
	while(t--){
		scanf("%d", &n);

		if (EhPrimo(n)){
			puts("Prime");
		}else{
			puts("Not Prime");
		}
	}

    return 0;
}
