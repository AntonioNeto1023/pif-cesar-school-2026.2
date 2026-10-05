#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num, quant =0, soma = 0, media=0;
    while (num >=0)
    {
        printf("Digite um valor inteiro:(digite negativo para parar): ");
        scanf("%d",&num);
        if (num<0){
            break;
        }
        quant +=1;
        soma += num;
    }
    media = soma/quant;
    printf("Foram digitados %d números, a soma deles foi %d e a média é %d.",quant, soma, media);
    return 0;
}