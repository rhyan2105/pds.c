#include <stdio.h>

int main(void) {
    int numero, i, pares = 0, impares = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %do numero inteiro: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Numeros pares: %d\n", pares);
    printf("Numeros impares: %d\n", impares);
    return 0;
}
