#include <stdio.h>

int main() {
    // Variaveis da primeira carta
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, PIB1, densidade1, pibpercapta1, super_poder1;
    char cidade1[20], codigo1[3], estado1[3];

    // Variaveis da segunda carta
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, PIB2, densidade2, pibpercapta2, super_poder2;
    char cidade2[20], codigo2[3], estado2[3];

    // Cadastro da primeira carta
    printf("\nAgora vamos cadastrar a primeiro estado! \n");
    printf("Digite o estado: ");
    scanf("%2s", estado1); // Lê até 2 caracteres para o estado

    printf("Digite o código da carta: ");
    scanf("%3s", codigo1); // Lê até 3 caracteres para o código

    printf("Digite o nome da cidade: ");
    scanf(" %19[^\n]", cidade1); // Lê o nome da cidade incluindo espaços

    printf("Digite a população: ");
    scanf("%f", &populacao1);

    printf("Digite a área em metros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para primeira carta
    densidade1 = area1 > 0 ? populacao1 / area1 : 0;
    pibpercapta1 = populacao1 > 0 ? (PIB1*1000000000)/populacao1 : 0;
    super_poder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + pibpercapta1 + (densidade1 > 0 ? 1/densidade1 : 0);
    
    printf("\nCarta 01:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpercapta1);

     // Cadastro da segunda carta
    printf("\nPra finalizar, vamos cadastrar a segundo estado! \n");
    printf("Digite o estado: ");
    scanf("%2s", estado2); // Lê até 2 caracteres para o estado

    printf("Digite o código da carta: ");
    scanf("%4s", codigo2); // Lê até 4 caracteres para o código

    printf("Digite o nome da cidade: ");
    scanf(" %19[^\n]", cidade2); // Lê o nome da cidade incluindo espaços

    printf("Digite a população: ");
    scanf("%f", &populacao2);

    printf("Digite a área em metros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

   // Cálculos para primeira carta
   densidade1 = area2 > 0 ? populacao2 / area2 : 0;
   pibpercapta2 = poulacao2 > 0 ? (PIB2*1000000000)/populacao2 : 0;
   super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + pibpercapta2 + (densidade2 > 0 ? 1/densidade2 : 0);

    printf("\nCarta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpercapta2);
    
    // Exibição dos resultados das comparações
    printf("Comparação de Cartas:\n");

    // População (maior vence)
    printf("População: Carta %d venceu (%d)\n", 
           populacao1 > populacao2 ? 1 : 2, 
           populacao1 > populacao2 ? 1 : 0);
    
    // Área (maior vence)
    printf("Área: Carta %d venceu (%d)\n", 
           area1 > area2 ? 1 : 2, 
           area1 > area2 ? 1 : 0);
    
    // PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n", 
           PIB1 > PIB2 ? 1 : 2, 
           PIB1 > PIB2 ? 1 : 0);
    
    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           pontos_turisticos1 > pontos_turisticos2 ? 1 : 2, 
           pontos_turisticos1 > pontos_turisticos2 ? 1 : 0);
    
    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           densidade1 < densidade2 ? 1 : 2, 
           densidade1 < densidade2 ? 1 : 0);
    
    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           pibpercapta1 > pibpercapta2 ? 1 : 2, 
           pibpercapta1 > pibpercapta2 ? 1 : 0);
    
    // Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n", 
           super_poder1 > super_poder2 ? 1 : 2, 
           super_poder1 > super_poder2 ? 1 : 0);


    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}
