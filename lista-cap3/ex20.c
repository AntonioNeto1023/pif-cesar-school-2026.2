#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
     for (int i = 32; i <= 126; i++) {
        printf("Decimal: %d | Hexadecimal: %X | Caractere: %c\n",
               i, i, i);
    }

    return 0;
}