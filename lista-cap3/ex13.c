#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    long long int num, fat = 1;
    printf("Digite um número para saber o fatorial: ");
    scanf("%d",&num);
    for(int i = num; i>=1; i--){
        fat *= i;
    }
    printf("O fatorial de %d é: %d",num, fat);
    return 0;
}