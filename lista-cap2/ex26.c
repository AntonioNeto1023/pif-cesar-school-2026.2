#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float comprimento, largura;
    float precoMetro;
    float perimetro;
    float metrosArame;
    float custoTotal;

    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);

    printf("Digite o preco do metro de arame (R$): ");
    scanf("%f", &precoMetro);

    // Calcula o perimetro do terreno
    perimetro = 2 * (comprimento + largura);

    // Sao necessarios exatamente 3 fios de arame
    metrosArame = perimetro * 3;

    // Calcula o custo total do arame
    custoTotal = metrosArame * precoMetro;

    printf("\nPerimetro do terreno: %.2f m\n", perimetro);
    printf("Quantidade de arame: %.2f m\n", metrosArame);
    printf("Custo total: R$ %.2f\n", custoTotal);

    return 0;
}