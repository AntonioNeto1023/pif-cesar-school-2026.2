#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float lado_a, lado_b, hipotenusa;

    printf("Digite o valor do cateto A: ");
    scanf("%f", &lado_a);

    printf("Digite o valor do cateto B: ");
    scanf("%f", &lado_b);

    hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    printf("A hipotenusa e: %.2f\n", hipotenusa);
    return 0;
}