#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int cont =0;
    float soma = 0, maior, menor, media, nota = 11;
    do{
        do
        {
            printf("Qual sua nota?(-1 para parar) ");
            scanf("%f",&nota);
            if (nota< 0 && nota != -1 || nota > 10){
                printf("Valor inválido, tente de novo\n");
            }    
        }while (nota< 0 && nota != -1 || nota > 10);
        if(cont ==0 && nota != -1){
            maior = nota;
            menor = nota;
        }else if(nota > maior && nota != -1){
            maior = nota;
        }
        if(menor>nota && nota != -1){
            menor = nota;
        }
        if(nota!= -1){
            cont += 1;
            soma += nota;
        }
    }while(nota!=-1); 
    media = soma/ cont;
    printf("Alunos: %d\n",cont);
    printf("Maior nota: %.2f\n",maior);
    printf("Menor nota: %.2f\n",menor);
    printf("Media: %.2f\n",media);
    return 0;
}