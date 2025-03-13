#include <stdio.h>
#include <string.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char estado[50], estado2[50];
    char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2, pib, pib2;
    int pontos, pontos2;
    float densidade, densidade2;
    float pcapita, pcapita2;
    float superPoder1, superPoder2;

    // Entrada de dados carta 01
    printf("Insira os dados da carta 1\n");

    // Estado 01
    printf("Escolha uma letra entre A-H: \n");
    scanf("%s", estado);
    limparBuffer(); 

    // Código 01
    printf("Escolha um numero de 01-04: \n");
    scanf("%s", codigo);
    limparBuffer(); 
    
    // Cidade 01
    printf("Digite o nome da cidade: \n");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';
   
    // População 01
    printf("Digite o numero da população: \n");
    scanf("%d", &populacao);
    limparBuffer();

    // Área 01
    printf("Digite a área: \n");
    scanf("%f", &area);
    limparBuffer();

    // PIB 01
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    limparBuffer();

    // Pontos Turísticos 01
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos);
    limparBuffer();

    // Cálculos para a carta 01
    densidade = populacao / area;
    pcapita = (pib * 1000000000) / (float)populacao;
    superPoder1 = populacao + area + pib + pontos + pcapita + (1 / densidade);

    // Entrada de dados carta 02
    printf("\nInsira os dados da carta 2\n");

    // Estado 02
    printf("Escolha uma letra entre A-H: \n");
    scanf("%s", estado2);
    limparBuffer();

    // Código 02 
    printf("Escolha um numero de 01-04: \n");
    scanf("%s", codigo2);
    limparBuffer();

    // Cidade 02
    printf("Digite o nome da cidade: \n");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; 

    // População 02 
    printf("Digite o numero da população: \n");
    scanf("%d", &populacao2);
    limparBuffer();

    // Área 02 
    printf("Digite a área: \n");
    scanf("%f", &area2);
    limparBuffer();

    // PIB 02
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    limparBuffer();

    // Pontos Turísticos 02
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos2);
    limparBuffer();

    // Cálculos para a carta 02
    densidade2 = populacao2 / area2;
    pcapita2 = (pib2 * 1000000000) / (float)populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pcapita2 + (1 / densidade2);

    // Saída de dados das cartas 01
    printf("\nCarta 1:\n");
    printf("Estado: %s \n", estado);
    printf("Código: %s%s \n", estado, codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de pontos Turísticos: %d \n", pontos);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade);
    printf("PIB per Capita: %.2f reais \n", pcapita);
    printf("Super Poder: %.2f \n", superPoder1);
    
    // Saída de dados das cartas 02
    printf("\nCarta 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s%s \n", estado2, codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos Turísticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pcapita2);
    printf("Super Poder: %.2f \n", superPoder2);

    // Comparação de cartas com base na População
    printf("\nComparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", cidade, estado, populacao);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    if (populacao > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else if (populacao < populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: As cartas empataram!\n");
    }

    return 0;
}