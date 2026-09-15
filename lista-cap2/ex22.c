#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #include <stdio.h>
    char maiuscula, minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &maiuscula);

    // Na tabela ASCII, a letra minuscula correspondente
    // esta 32 posicoes depois da letra maiuscula.
    minuscula = maiuscula + 32;

    printf("Letra minuscula: %c\n", minuscula);

  
    return 0;
}