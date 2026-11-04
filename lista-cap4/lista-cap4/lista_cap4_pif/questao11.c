#include <stdio.h>

int main(void) {
    int a, b, c, temp;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        temp = a; a = b; b = temp;
    }
    if (a > c) {
        temp = a; a = c; c = temp;
    }
    if (b > c) {
        temp = b; b = c; c = temp;
    }

    if (a == b || b == c) {
        printf("Nao e possivel formar uma ordem estritamente crescente: existem valores iguais.\n");
    } else {
        printf("Ordem crescente: %d %d %d\n", a, b, c);
    }

    return 0;
}
