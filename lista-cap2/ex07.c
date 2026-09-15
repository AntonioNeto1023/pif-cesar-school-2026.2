#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int dia, mes, ano;
    printf("Digite uma data no formato dd/aa/dddd: ");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    
    printf("Data invertida: %4d/%02d/%02d",ano,mes,dia);
    return 0;
}