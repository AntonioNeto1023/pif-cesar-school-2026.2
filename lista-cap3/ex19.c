#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
     int N;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite o número do termo desejado: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Digite um número maior que zero.\n");
    }
    else if (N == 1) {
        printf("Termo 1: 1\n");
        printf("Valor do termo: 1\n");
    }
    else if (N == 2) {
        printf("Termo 1: 1\n");
        printf("Termo 2: 1\n");
        printf("Valor do termo: 1\n");
    }
    else {
        printf("Termos da sequência:\n");
        printf("1 1 ");

        for (int i = 3; i <= N; i++) {
            proximo = anterior + atual;
            printf("%lld ", proximo);

            anterior = atual;
            atual = proximo;
        }

        printf("\nValor do termo %d: %lld\n", N, atual);
    }
    return 0;
}