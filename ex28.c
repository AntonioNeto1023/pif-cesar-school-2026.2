#include <stdio.h>
int main(){
    int v1,v2,v3;
    double media;
    printf("Digite o primeiro valor: ");
    scanf("%d",&v1);
    printf("Digite o segundo valor: ");
    scanf("%d",&v2);
    printf("Digite o terceiro valor: ");
    scanf("%d",&v3);
    media =(v1+v2+v3)/3;
    printf("A media artimetica entre %d,%d,%d e %.2lf",v1,v2,v3,media);
    return 0 ;
}