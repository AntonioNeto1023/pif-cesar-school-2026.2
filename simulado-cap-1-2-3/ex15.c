#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num, valor= 1;
    printf("Quantas fileiras? ");
    scanf("%d",&num);
    for(int i =1; i <= num; i++){
        for(int j = 1; j<=i; j++){
            printf("%d ",valor);
            valor++;
        }
        printf("\n");
    }
    return 0;
}