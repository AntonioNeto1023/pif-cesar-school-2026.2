#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
     int N;

    printf("Digite uma dimensão ímpar entre 3 e 19: ");
    scanf("%d", &N);

    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Valor inválido. Digite um número ímpar entre 3 e 19.\n");
    }
    else {

        for (int i = 0; i < N; i++) {

            for (int j = 0; j < N; j++) {

                if (j == i || j == N - 1 - i) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }
    return 0;
}