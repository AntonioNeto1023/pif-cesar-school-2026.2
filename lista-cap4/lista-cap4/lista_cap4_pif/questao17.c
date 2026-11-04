#include <stdio.h>

int main(void) {
    float compra, valorFinal, parcela, comissao;
    int opcao;

    printf("Valor total da compra: R$ ");
    scanf("%f", &compra);

    if (compra < 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Parcelado em 3x sem juros\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valorFinal = compra * 0.90f;
            comissao = valorFinal * 0.05f;
            printf("Valor final: R$ %.2f\n", valorFinal);
            printf("Comissao: R$ %.2f\n", comissao);
            break;
        case 2:
            parcela = compra / 3.0f;
            comissao = compra * 0.05f;
            printf("Cada parcela: R$ %.2f\n", parcela);
            printf("Comissao: R$ %.2f\n", comissao);
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
