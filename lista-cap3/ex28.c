#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int opcao;
    float salario, novoSalario, imposto, salarioLiquido;

    do {

        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1 - Reajuste Salarial\n");
        printf("2 - Retenção de Imposto de Renda\n");
        printf("3 - Encerrar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:

                printf("\nDigite o salário: R$ ");
                scanf("%f", &salario);

                if (salario <= 2000) {
                    novoSalario = salario * 1.15;
                }
                else {
                    novoSalario = salario * 1.10;
                }

                printf("Novo salário: R$ %.2f\n", novoSalario);

                break;

            case 2:

                printf("\nDigite o salário: R$ ");
                scanf("%f", &salario);

                if (salario <= 3000) {
                    imposto = salario * 0.08;
                }
                else {
                    imposto = salario * 0.15;
                }

                salarioLiquido = salario - imposto;

                printf("Imposto de Renda: R$ %.2f\n", imposto);
                printf("Salário após desconto: R$ %.2f\n",
                       salarioLiquido);

                break;

            case 3:

                printf("\nPrograma encerrado.\n");

                break;

            default:

                printf("\nOpção inválida! Escolha 1, 2 ou 3.\n");
        }

    } while (opcao != 3);

    return 0;
}