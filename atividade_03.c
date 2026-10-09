#include <stdio.h>

int main(void) {
    int numero, i;

    do {
        printf("Digite um numero inteiro de 1 a 10: ");
        scanf("%d", &numero);
    } while (numero < 1 || numero > 10);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
