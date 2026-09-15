#include <stdio.h>
#include <stdlib.h>

/*
=========================================================
QUESTAO 02 - Entrada Standard de Caracteres vs.
Bibliotecas Legadas
=========================================================

a) Por que evitar <conio.h>?

A biblioteca <conio.h> nao faz parte do padrao ANSI C.
Funcoes como getch() e getche() foram criadas para
determinados compiladores e sistemas, principalmente
ambientes antigos do DOS/Windows.

Por isso, programas que utilizam <conio.h> podem nao
compilar ou funcionar corretamente em sistemas modernos
como Linux, macOS e servidores.

Para desenvolver programas portaveis, devemos preferir
as funcoes da biblioteca padrao <stdio.h>.


b) Funcoes equivalentes e portaveis de <stdio.h>

A biblioteca <stdio.h> possui funcoes padrao para
entrada e saida de caracteres:

getchar()
    - Le um caractere da entrada padrao (teclado).

putchar()
    - Exibe um caractere na saida padrao (console).

Tambem existem:

fgetc()
    - Le um caractere de um fluxo, como stdin.

fputc()
    - Escreve um caractere em um fluxo, como stdout.


c) Leitura robusta de um caractere

O codigo abaixo utiliza getchar() e ignora caracteres
de quebra de linha ('\n') que possam ter ficado no buffer.
=========================================================
*/

int main() {
    char caractere;
    int entrada;

    printf("Digite um caractere: ");

    /*
    Continua lendo enquanto encontrar uma quebra de linha.
    O uso de int para a variavel entrada e recomendado para
    trabalhar corretamente com o retorno de getchar(),
    que tambem pode retornar EOF.
    */
    do {
        entrada = getchar();
    } while (entrada == '\n' || entrada == '\r');

    caractere = (char)entrada;

    printf("Caractere lido: %c\n", caractere);

    return 0;
}