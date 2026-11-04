#include <stdio.h>

int main(void) {
    float salario, percentual, aumento, novoSalario;
    int cargo;

    printf("Salario atual: R$ ");
    scanf("%f", &salario);
    printf("Cargo (1-Tecnico, 2-Gerente, 3-Demais): ");
    scanf("%d", &cargo);

    if (salario < 0) {
        printf("Salario invalido.\n");
        return 1;
    }

    switch (cargo) {
        case 1:
            percentual = (salario <= 3000) ? 0.15f : 0.10f;
            break;
        case 2:
            percentual = (salario <= 5000) ? 0.10f : 0.05f;
            break;
        case 3:
            percentual = 0.08f;
            break;
        default:
            printf("Codigo de cargo invalido.\n");
            return 1;
    }

    aumento = salario * percentual;
    novoSalario = salario + aumento;

    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);
    return 0;
}
