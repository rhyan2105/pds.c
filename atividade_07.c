#include <stdio.h>

int main(void) {
    int numero, i;
    unsigned long long fatorial = 1;

    do {
        printf("Digite um numero inteiro nao negativo: ");
        scanf("%d", &numero);
    } while (numero < 0);

    if (numero > 20) {
        printf("O fatorial de %d nao cabe em um inteiro sem sinal de 64 bits.\n", numero);
        return 0;
    }

    for (i = 2; i <= numero; i++) {
        fatorial *= (unsigned long long)i;
    }

    printf("%d! = %llu\n", numero, fatorial);
    return 0;
}
