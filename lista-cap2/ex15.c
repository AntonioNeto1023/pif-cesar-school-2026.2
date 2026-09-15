#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float nota, media_simples, media_pond = 0;
    for(int i = 1;i<=4;i++){
        printf("Digite a %d° nota: ",i);
        scanf("%f",&nota);
        media_simples += nota;
        if(i == 1 || i == 2){
            media_pond += nota;
        }else{
            media_pond += nota*2;
        }
    }
    media_simples /= 4;
    media_pond /= 6;
    printf("A média simples é: %.2f\n",media_simples);
    printf("A média ponderada é: %.2f\n",media_pond);
    return 0;
}