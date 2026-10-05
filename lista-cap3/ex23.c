#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
     int L;

    printf("Digite o tamanho do lado do quadrado (3 a 20): ");
    scanf("%d", &L);

    if (L < 3 || L > 20) {
        printf("Valor inválido. Digite um valor entre 3 e 20.\n");
    }
    else {

        for (int i = 1; i <= L; i++) {

            for (int j = 1; j <= L; j++) {

                if (i == 1 || i == L || j == 1 || j == L) {
                    printf("X");
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