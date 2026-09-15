#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int dado1, dado2, dado3;

    // Inicializa o gerador de numeros aleatorios
    // usando o horario atual como "semente".
    srand(time(NULL));

    // % 6 gera valores de 0 a 5.
    // Somando 1, obtemos valores de 1 a 6.
    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;

    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);

    return 0;
}