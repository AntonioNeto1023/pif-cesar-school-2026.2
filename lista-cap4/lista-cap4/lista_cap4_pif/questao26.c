#include <stdio.h>

int main(void) {
    int mes, ano, dias;
    const char *nomeMes;

    printf("Digite o numero do mes (1 a 12) e o ano: ");
    scanf("%d %d", &mes, &ano);

    switch (mes) {
        case 1: nomeMes = "janeiro"; dias = 31; break;
        case 2:
            nomeMes = "fevereiro";
            if (ano > 0 && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
        case 3: nomeMes = "marco"; dias = 31; break;
        case 4: nomeMes = "abril"; dias = 30; break;
        case 5: nomeMes = "maio"; dias = 31; break;
        case 6: nomeMes = "junho"; dias = 30; break;
        case 7: nomeMes = "julho"; dias = 31; break;
        case 8: nomeMes = "agosto"; dias = 31; break;
        case 9: nomeMes = "setembro"; dias = 30; break;
        case 10: nomeMes = "outubro"; dias = 31; break;
        case 11: nomeMes = "novembro"; dias = 30; break;
        case 12: nomeMes = "dezembro"; dias = 31; break;
        default:
            printf("Mes invalido.\n");
            return 1;
    }

    if (ano <= 0) {
        printf("Ano invalido.\n");
        return 1;
    }

    printf("%s: %d dias\n", nomeMes, dias);
    return 0;
}
