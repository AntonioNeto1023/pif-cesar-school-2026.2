#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float degrau, altura, quant = 0;
    printf("Qual a altura de cada degrau?(cm) ");
    scanf("%f",&degrau);
    printf("Qual a altura da escada?(m) ");
    scanf("%f", &altura);
    quant = (altura*100)/degrau;
    printf("A quantidade de degraus necessários é %.2f.",quant);
    return 0;
}