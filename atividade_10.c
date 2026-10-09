#include <limits.h>
#include <stdio.h>

int main(void) {
    int quantidade, i;
    unsigned long long anterior = 0, atual = 1;

    do {
        printf("Quantos termos da sequencia de Fibonacci (N >= 2)? ");
        scanf("%d", &quantidade);
    } while (quantidade < 2);

    printf("Sequencia: ");
    for (i = 1; i <= quantidade; i++) {
        unsigned long long proximo;

        if (i == 1) {
            printf("%llu", anterior);
        } else if (i == 2) {
            printf(" %llu", atual);
        } else {
            if (ULLONG_MAX - atual < anterior) {
                printf("\nA sequencia excede o limite do tipo inteiro usado.\n");
                return 0;
            }
            proximo = anterior + atual;
            printf(" %llu", proximo);
            anterior = atual;
            atual = proximo;
        }
    }
    printf("\n");
    return 0;
}
