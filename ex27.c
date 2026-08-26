#include <stdio.h>
int main(){
    int segundo,hora,minuto;
    printf("Quantos segundos? ");
    scanf("%d",&segundo);
    hora = segundo /3600;
    minuto =(segundo % 3600)/60 ;
    segundo = (segundo % 3600)%60;
    printf("hora = %d,  minuto = %d, segundos= %d",hora,minuto, segundo);
    return 0;
}