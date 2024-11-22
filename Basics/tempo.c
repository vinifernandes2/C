#include <stdio.h>

int main(void)
{
    int valor, hora, minuto, segundo, resto;

    printf("Digite os segundos");
    scanf("%d", &valor);

    hora = valor/3600;
    resto = valor%3600;
    minuto = resto/60;
    segundo = resto%60;

    printf("%d:%d:%d", hora, minuto, segundo);


    return 0;
}