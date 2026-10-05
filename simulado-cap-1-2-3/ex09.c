#include <stdio.h>
#include <math.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float a, b, c, area, p;
    printf("Valor do primeiro lado: ");
    scanf("%f",&a);
    printf("Valor do segundo lado: ");
    scanf("%f",&b);
    printf("Valor do terceiro lado: ");
    scanf("%f",&c);
    p = (a+b+c)/2.0;
    area = sqrt(p * (p -a) * (p - b) * (p - c));
    printf("A área de acordo com a formula de heron é: %.2f\n", area);
    return 0;
}