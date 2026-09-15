#include <stdio.h>

int main() {

    int a = 1, b = 2, c = 3, d = 4;

    // 1) a += b + c
    // b + c = 2 + 3 = 5
    // a = 1 + 5 = 6
    a += b + c;

    // 2) b *= c = d + 2
    // d + 2 = 4 + 2 = 6
    // c = 6
    // b = 2 * 6 = 12
    b *= c = d + 2;

    // 3) d %= a + a + a
    // a + a + a = 6 + 6 + 6 = 18
    // d = 4 % 18 = 4
    d %= a + a + a;

    // 4) d -= c -= b -= a
    // As atribuicoes sao avaliadas da direita para a esquerda.
    //
    // b -= a -> b = 12 - 6 = 6
    // c -= b -> c = 6 - 6 = 0
    // d -= c -> d = 4 - 0 = 4
    d -= c -= b -= a;

    // 5) a += b += c += 7
    // As atribuicoes sao avaliadas da direita para a esquerda.
    //
    // c += 7 -> c = 0 + 7 = 7
    // b += c -> b = 6 + 7 = 13
    // a += b -> a = 6 + 13 = 19
    a += b += c += 7;

    printf("Valores finais:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}