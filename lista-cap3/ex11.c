#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d",&a);
    printf("Digite o valor de B: ");
    scanf("%d",&b);
    printf("Os números no intervalo são: \n");
    if (a<= b){
        for(int i = a; i<=b; i++){
            printf("%d \n", i);
        }
    }else if(a> b){
        for(int i =a; i>=b; i--){
            printf("%d \n",i);
        }
    } 
    return 0;
}