#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float cel, faren, kel;
    printf("Quantos graus celsius está marcando agora?");
    scanf("%f°",&cel);
    faren = (cel* 9/5) + 32;
    kel = cel + 273.15;
    printf("Então está fazendo %.2f graus Fahrenheit.\n", faren);
    printf("Então está fazendo %.2f graus Kelvin.\n", kel);
    return 0;
}