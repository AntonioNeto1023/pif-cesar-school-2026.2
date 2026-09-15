#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float pi = 3.141593;
    float raio, area, volume;
    printf("Qual a medida do raio da esfera? ");
    scanf("%f",&raio);
    area = 4 * pi * pow(raio,2);
    volume = (4.0/3.0) * pi * pow(raio,3);
    printf("A área da esfera é %.2f m2.\n",area);
    printf("O volume da esfera é %.2f m³.\n",volume);
    return 0;
}