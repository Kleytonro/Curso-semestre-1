#include <stdio.h>



int main() {
    // Variaveis da primeira carta
    int poulacao1, pontos_turisticos1;
    float area1, PIB1;
    char cidade1[20], codigo1[3], estado1;

    // Variaveis da segunda carta
    int poulacao2, pontos_turisticos2;
    float area2, PIB2;
    char cidade2[20], codigo2[3], estado2;

    printf("Digite o estado: ");
    scanf("%2s", Estado); // Lê até 2 caracteres para o estado

    printf("Digite o código da carta: ");
    scanf("%4s", Codigo); // Lê até 4 caracteres para o código

    printf("Digite o nome da cidade: ");
    scanf(" %59[^\n]", Nome); // Lê o nome da cidade incluindo espaços

    printf("Digite a população: ");
    scanf("%d", &Populacao);

    printf("Digite a área em metros quadrados: ");
    scanf("%f", &Area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Numero);

    printf("Estado: %s\n", Estado);
    printf("Código da carta: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Nome);
    printf("População: %d\n", Populacao);
    printf("Área em metros quadrados: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Numero);

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}
