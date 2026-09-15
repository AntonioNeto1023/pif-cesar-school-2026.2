#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int horas, minutos, segundos;
    int duracao;
    int totalSegundos;
    int horaFinal, minutoFinal, segundoFinal;

    printf("Digite a hora de inicio: ");
    scanf("%d", &horas);

    printf("Digite os minutos de inicio: ");
    scanf("%d", &minutos);

    printf("Digite os segundos de inicio: ");
    scanf("%d", &segundos);

    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao);

    // Converte o horario inicial inteiro para segundos
    totalSegundos = horas * 3600 + minutos * 60 + segundos;

    // Soma a duracao do experimento
    totalSegundos = totalSegundos + duracao;

    // Calcula a hora, minuto e segundo do termino
    horaFinal = (totalSegundos / 3600) % 24;
    minutoFinal = (totalSegundos % 3600) / 60;
    segundoFinal = totalSegundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n",
           horaFinal, minutoFinal, segundoFinal);
    return 0;
}