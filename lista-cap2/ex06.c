#include <stdio.h>

int main() {

    /*
    =========================================================
    QUESTAO 06 - COMPORTAMENTO E PRECEDENCIA DOS INCREMENTOS
    =========================================================

    TRECHO A:

    int n = 5;
    int x = ++n;

    O operador ++n e um PRE-INCREMENTO.

    Primeiro, n e incrementado:
        n = 5 + 1
        n = 6

    Depois, o novo valor de n e atribuido a x:
        x = 6

    Portanto:
        n = 6
        x = 6
    */

    int n = 5;
    int x = ++n;

    printf("Trecho A: n = %d, x = %d\n", n, x);


    /*
    =========================================================

    TRECHO B:

    int m = 5;
    int y = m++;

    O operador m++ e um POS-INCREMENTO.

    Primeiro, o valor atual de m e utilizado:
        y = 5

    Depois, m e incrementado:
        m = 5 + 1
        m = 6

    Portanto:
        m = 6
        y = 5
    */

    int m = 5;
    int y = m++;

    printf("Trecho B: m = %d, y = %d\n", m, y);


    /*
    =========================================================
    PARTE B - COMPORTAMENTO INDEFINIDO
    =========================================================

    A instrucao abaixo NAO deve ser utilizada:

    printf("%d\t%d\t%d\n", n, n+1, n++);

    Isso acontece porque a variavel n esta sendo modificada
    (n++) e tambem acessada na mesma expressao sem uma
    ordenacao adequada entre essas operacoes.

    Em C, a ordem de avaliacao dos argumentos de uma funcao
    como printf() nao deve ser assumida como sendo da
    esquerda para a direita.

    Portanto, dependendo do compilador e da forma como ele
    avaliar os argumentos, o resultado pode variar.

    Esse caso caracteriza COMPORTAMENTO INDEFINIDO.

    Para evitar esse problema, devemos modificar a variavel
    em uma instrucao separada antes de utiliza-la novamente.
    */

    printf("\nForma segura:\n");

    printf("Antes do incremento: %d\n", n);

    n++;

    printf("Depois do incremento: %d\n", n);

    return 0;
}