#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    // Converte de quilometros por hora para metros por segundo.
    // Para isso, divide a velocidade em km/h por 3.6.
    ms = kmh / 3.6;

    printf("Velocidade em m/s: %.2f\n", ms);

    return 0;
}