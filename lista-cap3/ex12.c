#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float faren, kel;
    for(int i =0; i<=100; i+=5){
        faren = (9* i)/5 + 32;
        kel =  i + 273.15;
        printf("%d° Celsius = %.2f° Fahreinheit \n",i, faren);
        printf("%d° Celsius = %.2f° Kelvin \n",i, kel);
    }
    return 0;
}