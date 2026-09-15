#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float pi = 3.141593;
    float raio, area, circu;
    printf("Qual a medida do raio do circulo? ");
    scanf("%f", &raio);
    area = pi * pow(raio,2);
    circu = 2 * pi * raio;
    printf("A área do círculo é %.2f m².\n", area);
    printf("A área da circunferência do círculo é %.2f m².\n", circu);
    return 0;
}