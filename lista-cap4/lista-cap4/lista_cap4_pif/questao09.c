#include <stdio.h>

int main(void) {
    float laboratorio, semestral, exame, media;

    printf("Nota do Trabalho de Laboratorio: ");
    scanf("%f", &laboratorio);
    printf("Nota da Avaliacao Semestral: ");
    scanf("%f", &semestral);
    printf("Nota do Exame Final: ");
    scanf("%f", &exame);

    media = (laboratorio * 2 + semestral * 3 + exame * 5) / 10.0f;

    printf("Media ponderada: %.2f\n", media);

    if (media < 3.0f) {
        printf("Reprovado\n");
    } else if (media < 5.0f) {
        printf("Em Recuperacao\n");
    } else {
        printf("Aprovado\n");
    }

    return 0;
}
