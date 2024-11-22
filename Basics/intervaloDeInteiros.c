#include <stdio.h>

int main(void){
    int i, n1, n2, temp;

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &n1, &n2);

    if(n1>n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    i = n1;

    while(i<=n2){
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}