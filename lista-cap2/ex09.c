#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num1,num2;
    int mult, som, men;
    double div;
    printf("Digite o valor do primeiro número: ");
    scanf("%d",&num1);
    printf("Digite o valor do segundo número: ");
    scanf("%d",&num2);
    mult = num1 * num2;
    div = num1/num2;
    som = num1 + num2;
    men = num1 - num2;
    printf("O valor da multiplicação dos dois números é %d \n",mult);
    printf("O valor da divisão dos dois números é %.2lf \n",div);
    printf("O valor da soma dos dois números é %d \n", som);
    printf("O valor da subtração dos dois números é %d \n",men);
    return 0;
}