#include <stdio.h>

int main()
{
    int valor, troco;
    int v100, v50, v20, v10, v5, v2, v1;
    scanf("%d", &valor);

    v100 = valor/100;
    troco = valor - v100 * 100;
    v50 = troco/50;
    troco = troco - v50 * 50;
    v20 = troco/20;
    troco = troco - v20 * 20;
    v10 = troco/10;
    troco = troco - v10 * 10;
    v5 = troco/5;
    troco = troco - v5 * 5;
    v2 = troco/2;
    troco = troco - v2 * 2;
    v1 = troco;

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", v100);
    printf("%d nota(s) de R$ 50,00\n", v50);
    printf("%d nota(s) de R$ 20,00\n", v20);
    printf("%d nota(s) de R$ 10,00\n", v10);
    printf("%d nota(s) de R$ 5,00\n", v5);
    printf("%d nota(s) de R$ 2,00\n", v2);
    printf("%d nota(s) de R$ 1,00\n", v1);

    return 0;
}
