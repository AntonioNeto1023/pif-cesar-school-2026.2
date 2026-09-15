#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num, ante, suce;
    printf("Qual seu número? ");
    scanf("%d",&num);
    ante = --num;
    suce = num+2;
    printf("O antecessor de %d é %d e o seu sucessor é %d",num+1, ante, suce);
    return 0;
}