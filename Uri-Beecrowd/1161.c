#include <stdio.h>

unsigned long long Fatorial(int n){
    unsigned long long i, fat = 1;
    
    for(i = 2; i <= n; i++){
        fat *= i;
    }
    
    return fat;
}


int main(void){
    int m, n;
    
	    while (scanf("%d %d", &m, &n) != EOF){
        printf("%llu\n", Fatorial(m) + Fatorial(n));
    }
    
    return 0;
}