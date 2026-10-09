#include <stdio.h>

int main(void) {
    int inicial, final, atual;
    long long soma = 0;

    printf("Digite o valor inicial e o valor final: ");
    scanf("%d %d", &inicial, &final);

    if (inicial > final) {
        int temporario = inicial;
        inicial = final;
        final = temporario;
    }

    for (atual = inicial; ; atual++) {
        soma += atual;
        if (atual == final) break;
    }

    printf("A soma dos numeros no intervalo e %lld.\n", soma);
    return 0;
}
