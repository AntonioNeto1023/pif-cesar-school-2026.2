#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float lado_q, area_q;
    float base_tri, altura, area_tri;
    float base_ret, altura_ret, area_ret;
    printf("Qual a medida do lado do quadrado? ");
    scanf("%f",&lado_q);
    area_q = pow(lado_q,2);
    printf("A área do quadrado é: %.2fm²\n",area_q);

    printf("Digite a medida da base do triângulo: ");
    scanf("%f",&base_tri);
    printf("Digite a medida da altura do triângulo: ");
    scanf("%f", &altura);
    area_tri = (base_tri * altura )/2;
    printf("A área do triângulo é: %.2fm²\n",area_tri);

    printf("Digite a medida da base do retângulo: ");
    scanf("%f", &base_ret);
    printf("Digite a medida da altura do retângulo: ");
    scanf("%f", &altura_ret);
    area_ret = base_ret * altura_ret;
    printf("A área do retângulo é: %.2fm²\n", area_ret);
    return 0;
}