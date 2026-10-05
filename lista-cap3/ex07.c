#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int cont = 1;
    for(int i = 1; i<=100; i++){
        printf("%d \n",i);
    }
    while (cont!=101)
    {
        printf("%d \n",cont);
        cont +=1;
    }
    cont = 1;
    do{
        printf("%d \n",cont);
        cont +=1;
    }while(cont!= 101);
    /* O laço mais recomendado é o for porque nós sabemos a quantidade de números exata.*/
    return 0;
}
