#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    boolean ok = false;
    int nota = 0;
    do{
        
        printf("Digite a nota: ");
        scanf("%d",&nota);
        if (nota >=0 && nota <=10){
            ok = true;
        }else{
            printf("Valor inválido, tente novamente!\n");
        }    
    }while (ok == false);
    printf("O valor digitado foi %d",nota);
    return 0;
}