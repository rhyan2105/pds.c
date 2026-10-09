#include <stdio.h>

int main(void) {
    double nota, soma = 0.0;
    int quantidade = 0;

    while (1) {
        printf("Digite uma nota entre 0.0 e 10.0 (-1 para encerrar): ");
        scanf("%lf", &nota);

        if (nota == -1.0) break;
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida. Digite um valor entre 0.0 e 10.0.\n");
            continue;
        }

        soma += nota;
        quantidade++;
    }

    printf("Quantidade de notas: %d\n", quantidade);
    if (quantidade > 0) {
        printf("Media: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhuma nota foi inserida; nao ha media para calcular.\n");
    }

    return 0;
}
