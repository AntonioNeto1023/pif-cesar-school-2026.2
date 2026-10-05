#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    long long int fat= 1;
    int num ;
    printf("QUal numero você quer ver fatorial? ");
    scanf("%d",&num);
    if (num == 0){
        fat = 1;
    }
    if (num > 0){
        for(int i = 1; i<=num; i++){
            fat *= i;
        }
    }else if(num<0){
        printf("Não existe fatorial de número negativo!\n");
    }
    if(num<0){
        printf("Não tem fatorial.\n"); 
    }
    if (num > 0){
        printf("O fatorial de %d é %lld.\n", num,fat);
    }
    return 0;
}