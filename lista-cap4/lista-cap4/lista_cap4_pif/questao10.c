#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("PAR\n");
    } else {
        printf("IMPAR\n");
    }

    if (numero > 0) {
        printf("POSITIVO\n");
    } else if (numero < 0) {
        printf("NEGATIVO\n");
    } else {
        printf("ZERO\n");
    }

    return 0;
}
