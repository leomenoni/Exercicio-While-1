#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &num);

        if (num < 1 || num > 10) {
            printf("Número inválido. Tente novamente.\n");
        } else {
            break;
        }
    }

    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}

