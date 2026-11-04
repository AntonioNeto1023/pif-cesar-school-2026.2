#include <stdio.h>

int main(void) {
    int horas;
    float valor = 0.0f;

    printf("Quantas horas inteiras o veiculo permaneceu? ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Quantidade de horas invalida.\n");
        return 1;
    }

    if (horas <= 2) {
        valor = horas * 2.0f;
    } else if (horas <= 4) {
        valor = 2 * 2.0f + (horas - 2) * 2.5f;
    } else {
        valor = 2 * 2.0f + 2 * 2.5f + (horas - 4) * 3.0f;
    }

    printf("Tempo total: %d horas\n", horas);
    printf("Valor final: R$ %.2f\n", valor);
    return 0;
}
