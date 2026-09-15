#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int dias, taxa = 30;
    float salario_bruto, salario_liq;
    printf("Quantos dias você vai trabalhar? ");
    scanf("%d", &dias);
    salario_bruto = taxa * dias;
    salario_liq = salario_bruto - (salario_bruto * 8/100);
    printf("Seu salário bruto será de R$%.2f.\n",salario_bruto);
    printf("Seu salário líquido será de R$%.2f.\n",salario_liq);
    return 0;
}