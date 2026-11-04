#include <stdio.h>

int main(void) {
    int total, pago, troco, quantidade, resto;

    printf("Valor total a pagar (inteiro): R$ ");
    scanf("%d", &total);
    printf("Valor entregue pelo cliente: R$ ");
    scanf("%d", &pago);

    if (total <= 0 || pago <= 0) {
        printf("Valores devem ser positivos.\n");
        return 1;
    }
    if (pago < total) {
        printf("Erro: valor entregue insuficiente.\n");
        return 1;
    }

    troco = pago - total;
    resto = troco;
    printf("Troco: R$ %d\n", troco);

    quantidade = resto / 100;
    printf("Cedulas de R$ 100: %d\n", quantidade);
    resto %= 100;

    quantidade = resto / 50;
    printf("Cedulas de R$ 50: %d\n", quantidade);
    resto %= 50;

    quantidade = resto / 20;
    printf("Cedulas de R$ 20: %d\n", quantidade);
    resto %= 20;

    quantidade = resto / 10;
    printf("Cedulas de R$ 10: %d\n", quantidade);
    resto %= 10;

    quantidade = resto / 5;
    printf("Cedulas de R$ 5: %d\n", quantidade);
    resto %= 5;

    quantidade = resto / 2;
    printf("Cedulas de R$ 2: %d\n", quantidade);
    resto %= 2;

    if (resto != 0) {
        printf("Aviso: nao e possivel formar R$ %d restante usando somente as cedulas informadas.\n", resto);
    }

    return 0;
}
