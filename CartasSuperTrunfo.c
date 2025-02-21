#include <stdio.h>
#include <string.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


int main() {
    printf("Bem vindo ao jogo de cartas Super Trunfo!\n");
    
    char estado[50], estado2[50];
    char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2, pib, pib2;
    int pontos, pontos2;

    printf("Insira os dados da carta 1\n");

    // Estado
    printf("Escolha uma letra entre A-H: \n");
    scanf("%s", estado);
    limparBuffer(); 

    // Código
    printf("Escolha um numero de 01-04: \n");
    scanf("%s", codigo);
    limparBuffer(); 
    
   // Cidade
   printf("Digite o nome da cidade: \n");
   limparBuffer(); 
   fgets(cidade, 50, stdin);
   cidade[strcspn(cidade, "\n")] = '\0'; 
   
   // População
    printf("Digite o numero da população: \n");
    scanf("%d", &populacao);
    limparBuffer(); 

    // Área
    printf("Digite a área: \n");
    scanf("%f", &area);
    limparBuffer(); 

    // PIB
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    limparBuffer(); 

    // Pontos Turísticos
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos);
    limparBuffer(); 

    printf("\nInsira os dados da carta 2\n");

    // Estado
    printf("Escolha uma letra entre A-H: \n");
    scanf("%s", estado2);
    limparBuffer(); 

    // Código
    printf("Escolha um numero de 01-04: \n");
    scanf("%s", codigo2);
    limparBuffer(); 

    // Cidade
    printf("Digite o nome da cidade: \n");
    limparBuffer(); 
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; 

    // População
    printf("Digite o numero da população: \n");
    scanf("%d", &populacao2);
    limparBuffer(); 

    // Área
    printf("Digite a área: \n");
    scanf("%f", &area2);
    limparBuffer(); 

    // PIB
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    limparBuffer(); 

    // Pontos Turísticos
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos2);
    limparBuffer();  

    //dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s \n", estado);
    printf("Código: %s%s \n", estado, codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %0.2f km² \n", area);
    printf("PIB: %0.2f bilhões de reais \n", pib);
    printf("Número de pontos Turísticos: %d \n", pontos);

    printf("\nCarta 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s%s \n", estado2, codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %0.2f km² \n", area2);
    printf("PIB: %0.2f bilhões de reais \n", pib2);
    printf("Número de pontos Turísticos: %d \n", pontos2);

    return 0;
}