#include <stdio.h>

int main(void) {
    int primeiro, segundo, terceiro, maior;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &primeiro, &segundo, &terceiro);

    if (primeiro == segundo && segundo == terceiro) {
        printf("Os tres numeros sao iguais.\n");
    } else {
        maior = primeiro;
        if (segundo > maior) maior = segundo;
        if (terceiro > maior) maior = terceiro;

        if ((primeiro == maior) + (segundo == maior) + (terceiro == maior) > 1) {
            printf("O maior valor, %d, aparece mais de uma vez.\n", maior);
        } else {
            printf("O maior numero e %d.\n", maior);
        }
    }

    return 0;
}
