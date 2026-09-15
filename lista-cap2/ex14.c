#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float a, b, c, area,p;
    printf("Digite a medida do primeiro lado: ");
    scanf("%f", &a);
    printf("Digite a medida do terceiro lado: ");
    scanf("%f", &b);
    printf("Digite a medida do terceiro lado: ");
    scanf("%f", &c);
    p = (a + b + c)/2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("A área desse triângulo é: %.2f",area);

    return 0;
}