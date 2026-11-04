#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, resultado;
    char operacao;

    printf("Operacoes: + - * / ^\n");
    printf("Escolha a operacao: ");
    scanf(" %c", &operacao);
    printf("Digite os dois operandos: ");
    scanf("%lf %lf", &a, &b);

    switch (operacao) {
        case '+': resultado = a + b; break;
        case '-': resultado = a - b; break;
        case '*': resultado = a * b; break;
        case '/':
            if (b == 0) {
                printf("Erro: divisao por zero!\n");
                return 1;
            }
            resultado = a / b;
            break;
        case '^': resultado = pow(a, b); break;
        default:
            printf("Operacao invalida.\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
