#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num, potencia =0;
    printf("Digite um número: ");
    scanf("%d",&num);
    potencia = pow(num,2);
    printf("A potencia de %d é %d \n",num, potencia);
    printf("A decima parte de %d é %.2f",num,(float)num/10);

    return 0;
}