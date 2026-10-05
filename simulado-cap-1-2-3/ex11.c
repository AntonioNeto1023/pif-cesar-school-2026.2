#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int dias, bruto, liquido;
    printf("Dias trabalhados: ");
    scanf("%d",&dias);
    bruto = dias *45 + (dias* 45 *5/100);
    liquido = bruto - (bruto * 8/100);
    printf("\t VALORES \t\n");
    printf("Dias trabalhados: \t%d\n",dias);
    printf("Sálario bruto(+5porcento): R$%d,00\n",bruto);
    printf("Sálario líquido: \tR$%d,00\n",liquido);
    return 0;
}