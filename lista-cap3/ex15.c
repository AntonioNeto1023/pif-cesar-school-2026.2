#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num, cont =0;
    printf("Valor do numero: ");
    scanf("%d", &num);
    for(int i=1; i<= num; i++){
        if(i%3 ==0 && i%5 ==0){
            printf("%d é multiplo de 3 e 5 \n",i);
            cont +=1;
        }
    }
    if(cont ==0){
        printf("nenhum multiplo foi encontrado");
    }
    return 0;
}