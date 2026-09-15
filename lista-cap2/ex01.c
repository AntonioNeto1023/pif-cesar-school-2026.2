#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    // =========================================================
    // Questao: Truncamento de Tipos e Coercao Implicita
    // =========================================================

    int valor_inteiro;

    // O valor 2.97 e do tipo double.
    // Ao atribui-lo a uma variavel int, ocorre uma conversao
    // implicita de double para int.
    //
    // Como o tipo int nao armazena casas decimais, a parte
    // fracionaria e descartada (truncamento).
    valor_inteiro = 2.97;

    // a) O valor exibido sera 2.
    printf("a) Valor armazenado: %d\n", valor_inteiro);

    // b) Ocorre uma conversao implicita de tipos (coercao implicita).
    // O valor 2.97 e convertido para int e sua parte decimal
    // e descartada:
    //
    // 2.97 -> 2
    //
    // Isso e truncamento, e nao arredondamento.
    printf("b) Ocorre conversao implicita de double para int.\n");
    printf("   A parte decimal e descartada por truncamento.\n");

    // c) Para manter a precisao, podemos usar double ou float.
    double valor_preciso = 2.97;

    printf("c) Mantendo a precisao: %.2f\n", valor_preciso);

    // Caso seja necessario arredondar o valor, podemos usar
    // a funcao round() da biblioteca math.h.
    int valor_arredondado = (int)round(valor_preciso);

    printf("   Valor arredondado: %d\n", valor_arredondado);

    // O (int) e um CAST, ou seja, uma conversao explicita
    // realizada pelo programador.

    system("PAUSE");

    return 0;
}