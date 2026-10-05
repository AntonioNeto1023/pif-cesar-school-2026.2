#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int N;
    int divisores = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("%d não é um número primo.\n", N);
    }
    else {

        for (int i = 1; i <= N; i++) {

            if (N % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d é um número primo.\n", N);
        }
        else {
            printf("%d não é um número primo.\n", N);
        }

        printf("Quantidade de divisores encontrados: %d\n", divisores);
    }
    return 0;
}