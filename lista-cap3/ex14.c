#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int soma= 0;
    for (int i = 1; i<=100; i++){
        printf("%d -> %d \n",i, i*i);
        soma += (i*i);
    }
    printf("O valor da soma dos quadrados é: %d",soma);
    return 0;
}