#include <stdio.h>
#include <math.h>

int main(void) {
    double numero;

    printf("Digite um numero real: ");
    scanf("%lf", &numero);

    if (numero >= 0) {
        printf("Raiz quadrada: %.2f\n", sqrt(numero));
    } else {
        printf("Quadrado: %.2f\n", numero * numero);
    }

    return 0;
}
