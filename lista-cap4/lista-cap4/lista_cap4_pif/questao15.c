#include <stdio.h>

int main(void) {
    int idade, tempoServico;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de servico em anos: ");
    scanf("%d", &tempoServico);

    if (idade < 0 || tempoServico < 0) {
        printf("Dados invalidos.\n");
    } else if (idade >= 65 || tempoServico >= 30 ||
               (idade >= 60 && tempoServico >= 25)) {
        printf("Pode se aposentar.\n");
    } else {
        printf("Nao pode se aposentar.\n");
    }

    return 0;
}
