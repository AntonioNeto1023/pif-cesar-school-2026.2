#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char c;
    printf("Digite um caractere: ");
    scanf("%c",&c);
     // Quando um caractere e exibido como inteiro,
    // o numero representa o seu codigo na tabela ASCII.
    printf("O caractere %c na tabela ASCII é: %d",c,c);
    return 0;
}