#include <stdio.h>

int main(void) {
    int opcao;
    double temperatura, resultado;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%lf", &temperatura);

    switch (opcao) {
        case 1: resultado = temperatura * 1.8 + 32; break;
        case 2: resultado = temperatura + 273.15; break;
        case 3: resultado = (temperatura - 32) / 1.8; break;
        case 4: resultado = temperatura - 273.15; break;
        default:
            printf("Opcao invalida.\n");
            return 1;
    }

    printf("Temperatura convertida: %.2f\n", resultado);
    return 0;
}
