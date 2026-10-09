#include <stdio.h>

int main(void) {
    int numero, atual;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    for (atual = numero; atual >= 0; atual--) {
        printf("%d\n", atual);
    }

    return 0;
}
