#include <stdio.h>

int main(void){
    int n[10], i, v;

    scanf("%d", &v);
    for(i=0; i<10; i++){
        n[i] = v;
        printf("N[%d] = %d\n", i, v);
        v*=2;
    }
        
    return 0;
}