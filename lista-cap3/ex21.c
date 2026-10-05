#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char secreta, tentativa;
    int tentativas = 0;

    srand(time(NULL));

    secreta = rand() % 26 + 'a';

    printf("Tente adivinhar a letra secreta!\n");

    do {
        printf("Digite uma letra minúscula: ");
        scanf(" %c", &tentativa);

        tentativas++;

        if (tentativa < secreta) {
            printf("A letra secreta vem depois no alfabeto.\n");
        }
        else if (tentativa > secreta) {
            printf("A letra secreta vem antes no alfabeto.\n");
        }
        else {
            printf("Parabéns! Você acertou!\n");
            printf("Número de tentativas: %d\n", tentativas);
        }

    } while (tentativa != secreta);
    return 0;
}