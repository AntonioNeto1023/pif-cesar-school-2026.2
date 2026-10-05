#include <stdio.h>
#include <math.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float pi = 3.14159265;
    float r, area, volume;
    printf("Qual o valor do raio da esfera? "); 
    scanf("%f",&r);
    area = 4 * pi *(pow(r,2));
    volume = (4.0/3.0)*pi *(pow(r,3));
    printf("O valor da área e do volume respectivamente são: %.3f e %.3f", area, volume);
    return 0;
}