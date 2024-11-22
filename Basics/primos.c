#include <stdio.h>

int main() {
    int numero, i, eh_primo = 1;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (numero <= 1) {
        eh_primo = 0; // Número menor ou igual a 1 não é primo
    } else {
        for (i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                eh_primo = 0; // Se for divisível por algum número, não é primo
                break;
            }
        }
    }

    if (eh_primo) {
        printf("%d eh um numero primo.\n", numero);
    } else {
        printf("%d nao eh um numero primo.\n", numero);
    }
    
    return 0;
}