#include <stdio.h>
#include <math.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int segundo, hora, minuto, segundos;
    printf("Quantos segundos você quer consultar? ");
    scanf("%d",&segundo);
    hora = segundo/3600 ;
    minuto = (segundo%3600)/60;
    segundos = (segundo%3600)%60;
    printf("%d segundos são %d hora(s) %d minuto(s) e %d segundo(s).\n",segundo, hora, minuto, segundos);
    return 0;
}