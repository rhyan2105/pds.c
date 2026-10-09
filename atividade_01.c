#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("O numero e %s.\n", numero % 2 == 0 ? "par" : "impar");
    if (numero > 0) {
        printf("O valor e positivo.\n");
    } else if (numero < 0) {
        printf("O valor e negativo.\n");
    } else {
        printf("O valor e zero.\n");
    }

    return 0;
}
