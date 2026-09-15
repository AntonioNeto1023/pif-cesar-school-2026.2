#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float salarioBase;
    float gratificacao;
    float imposto;
    float salarioLiquido;

    printf("Digite o salario-base: R$ ");
    scanf("%f", &salarioBase);

    // Gratificacao = 5% do salario-base
    gratificacao = salarioBase * 5 / 100;

    // Imposto = 7% do salario-base
    imposto = salarioBase * 7 / 100;

    // Salario liquido = salario-base + gratificacao - imposto
    salarioLiquido = salarioBase + gratificacao - imposto;

    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}