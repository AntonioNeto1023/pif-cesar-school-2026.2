#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int senha, cont=0;
    while (cont !=3)
    {
        printf("Senha: ");
        scanf("%d", &senha);
        if (senha == 2026){
            printf("Senha correta, acesso liberado.\n");
            break;
        }
        printf("Senha incorreta, tente novamente!\n");
        cont += 1;
        if (cont == 3){
            printf("Maximo de 3 tentativas, conta bloqueada.\n");
            break;
        }
    }
    
    return 0;
}