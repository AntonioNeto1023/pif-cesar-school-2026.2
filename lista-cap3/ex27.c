#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
      int saque;
    int restante;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &saque);

    if (saque <= 0) {
        printf("Valor de saque inválido.\n");
    }
    else {

        restante = saque;

        int cedulas[] = {100, 50, 20, 10, 5, 2};

        printf("\nCédulas utilizadas:\n");

        for (int i = 0; i < 6; i++) {

            int quantidade = 0;

            while (restante >= cedulas[i]) {
                restante -= cedulas[i];
                quantidade++;
            }

            if (quantidade > 0) {
                printf("R$ %d: %d cédula(s)\n",
                       cedulas[i], quantidade);
            }
        }

        if (restante != 0) {
            printf("\nNão é possível realizar o saque de R$ %d "
                   "com as cédulas disponíveis.\n", saque);
        }
        else {
            printf("\nSaque realizado com sucesso!\n");
        }
    }
    return 0;
}