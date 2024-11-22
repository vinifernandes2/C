#include <stdio.h>

unsigned long long Fibonacci(int n){
	
	unsigned long long ant1, ant2, atual;

	int i;
	
	if (n == 0 || n == 1){
		return n;
	}
	
	ant1 = 0;
	ant2 = 1;

	for(i = 2; i <= n; i++){
		atual = ant1 + ant2;
		ant1 = ant2;
		ant2 = atual;
	}
	
	return atual;
}

int main(void){
	int t, n;
	
	scanf("%d", &t);
	
	while(t--){
		scanf("%d", &n);
		
		printf("Fib(%d) = %llu\n", n, Fibonacci(n));
	}


    return 0;
}
