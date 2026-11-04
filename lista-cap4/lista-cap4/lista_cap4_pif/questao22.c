#include <stdio.h>

int main(void) {
    float valor, aliquota, valorFinal;
    int estado;

    printf("Valor do produto: R$ ");
    scanf("%f", &valor);
    printf("Estado (1-MG, 2-SP, 3-RJ, 4-MS): ");
    scanf("%d", &estado);

    if (valor < 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    switch (estado) {
        case 1: aliquota = 0.07f; break;
        case 2: aliquota = 0.12f; break;
        case 3: aliquota = 0.15f; break;
        case 4: aliquota = 0.08f; break;
        default:
            printf("Codigo de estado invalido.\n");
            return 1;
    }

    valorFinal = valor * (1 + aliquota);
    printf("Preco final com imposto: R$ %.2f\n", valorFinal);
    return 0;
}
