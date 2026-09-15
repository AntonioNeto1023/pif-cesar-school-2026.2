#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    /*
    %d -> representa o numero em decimal
    %x -> representa o numero em hexadecimal (caixa baixa)
    %o -> representa o numero em octal
    %c -> interpreta o valor como um caractere da tabela ASCII
    */

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
           numero, numero, numero, numero);

    return 0;
}