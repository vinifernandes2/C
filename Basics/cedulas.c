#include <stdio.h>

int main(void)
{
    int  valor, c100, c50, c20, c10, c5, c2, c1, troco;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    c100 = valor/100;
    troco = valor - c100 * 100;
    c50 = troco/50;
    troco = troco - c50 * 50;
    c20 = troco/20;
    troco = troco - c20 * 20;
    c10 = troco/10;
    troco = troco - c10 * 10;
    c5 = troco/5;
    troco = troco - c5 * 5;
    c2 = troco/2;
    troco = troco - c2 * 2;
    c1 = troco;

    printf("Sao necessarios %d cedulas de 100\n", c100);
    printf("Sao necessarios %d cedulas de 50\n", c50);
    printf("Sao necessarios %d cedulas de 20\n", c20);
    printf("Sao necessarios %d cedulas de 10\n", c10);
    printf("Sao necessarios %d cedulas de 5\n", c5);
    printf("Sao necessarios %d cedulas de 2\n", c2);
    printf("Sao necessarios %d cedulas de 1\n", c1);

    return 0;
}