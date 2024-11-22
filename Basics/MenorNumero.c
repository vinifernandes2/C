#include <stdio.h>

int main(void)
{
    float n1, n2;

    printf("Digite dois numeros: ");
    scanf("%f%f", &n1, &n2);

    if(n1 < n2){
        printf("O numero %f eh o menor", n1);
    }else{
        printf("O numero %f eh o menor", n2);
    }

    return 0;
}