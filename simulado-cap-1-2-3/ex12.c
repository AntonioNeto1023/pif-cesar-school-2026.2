#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int nota;
    do{
        printf("Qual foi sua nota? ");
        scanf("%d",&nota);
        if (nota < 0 || nota > 10){
            printf("Valor inválido, tente de novo!\n");
        }
    }while(nota < 0 || nota > 10);
    printf("Sua nota foi %d",nota);
    return 0;
}