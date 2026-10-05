#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
     int A, B;
    int divisores;
    int soma = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A <= 0 || B <= 0 || A >= B) {
        printf("Valores inválidos. A deve ser positivo e menor que B.\n");
    }
    else {

        printf("Números primos no intervalo [%d, %d]:\n", A, B);

        for (int numero = A; numero <= B; numero++) {

            divisores = 0;

            for (int i = 1; i <= numero; i++) {

                if (numero % i == 0) {
                    divisores++;
                }
            }

            if (divisores == 2) {
                printf("%d ", numero);
                soma += numero;
            }
        }

        printf("\nSoma dos números primos: %d\n", soma);
    }

    return 0;
}