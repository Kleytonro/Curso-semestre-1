#include <stdio.h>

int main() {
    char Estado[3]; // Aumenta o tamanho para 3 para incluir o caractere nulo
    char Codigo[5]; // Aumenta o tamanho para 5 para incluir o caractere nulo
    char Nome[60]; // Mantém o tamanho 60 para o nome da cidade
    int Populacao; // Declara uma variável inteira chamada "Populacao"
    float Area; // Declara uma variável de ponto flutuante chamada "area metro quadrado"
    float PIB; // Declara uma variável de ponto flutuante chamada "pib"
    int Numero;  // Declara uma variável inteira chamada "numero de pontos turisticos"

    printf("Digite o estado: ");
    scanf("%2s", Estado); // Lê até 2 caracteres para o estado

    printf("Digite o código da carta: ");
    scanf("%4s", Codigo); // Lê até 4 caracteres para o código

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Nome); // Lê o nome da cidade incluindo espaços

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