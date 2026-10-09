#include <stdio.h>

int main(void) {
    const int numeroSecreto = 42;
    int palpite;

    do {
        printf("Adivinhe o numero secreto: ");
        scanf("%d", &palpite);

        if (palpite < numeroSecreto) {
            printf("O palpite e menor que o numero secreto.\n");
        } else if (palpite > numeroSecreto) {
            printf("O palpite e maior que o numero secreto.\n");
        }
    } while (palpite != numeroSecreto);

    printf("Voce acertou!\n");
    return 0;
}
