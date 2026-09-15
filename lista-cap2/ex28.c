#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float horasNormais, horasExtras;
    float salarioBruto;
    float imposto;
    float salarioLiquido;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horasNormais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horasExtras);

    // Cada hora normal vale R$ 10,00
    // Cada hora extra vale R$ 15,00
    salarioBruto = (horasNormais * 10) + (horasExtras * 15);

    // Ate R$ 12.000,00 o trabalhador e isento.
    // Acima disso, paga 10% somente sobre o valor excedente.
    imposto = (salarioBruto > 12000)
              ? (salarioBruto - 12000) * 0.10
              : 0;

    salarioLiquido = salarioBruto - imposto;

    printf("\nSalario anual bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto a pagar: R$ %.2f\n", imposto);
    printf("Salario anual liquido: R$ %.2f\n", salarioLiquido);
    return 0;
}