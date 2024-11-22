#include <stdio.h>

int main(void){
    int n[20], i, temp;

    for(i=0; i<=19; i++){
        scanf("%d", &n[i]);
    }

    for(i=0; i<=9; i++){
        temp = n[i];
        n[i] = n[19-i];
        n[19-i] = temp;
    }

    for(i=0; i<=19; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}