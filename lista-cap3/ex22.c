#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int N;
    int numero = 1;

    printf("Digite o número de linhas: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Digite um número inteiro positivo.\n");
    }
    else {
        for (int i = 1; i <= N; i++) {

            for (int j = 1; j <= i; j++) {
                printf("%d ", numero);
                numero++;
            }

            printf("\n");
        }
    }
    return 0;
}