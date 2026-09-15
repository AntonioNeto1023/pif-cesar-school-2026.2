#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int angulo;
    float pi = 3.141593;
    float radianos;
    printf("Quantos graus você quer transformar? ");
    scanf("%d",&angulo);
    radianos = angulo * ((float)pi/180.00);
    printf("Em radianos o angulo %d vira %f radianos",angulo, radianos);
    return 0;
}