#include <stdio.h>

int main(void) {
    const int senhaCorreta = 1234;
    int senha, tentativa;

    for (tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha numerica (tentativa %d de 3): ", tentativa);
        scanf("%d", &senha);

        if (senha == senhaCorreta) {
            printf("Acesso autorizado.\n");
            return 0;
        }

        printf("Senha incorreta.\n");
    }

    printf("Limite de tentativas atingido. Acesso bloqueado.\n");
    return 0;
}
