#include <stdio.h>

int main() {  
   // variáveis
    char estado [50];
    char codigo [10];
    char cidade [50];
    float area, pib;
    float densiade, per_capita;
    int pontos_turisticos, populacao;

   // funcões de entrada de dados 
    printf("Estado: ");
    scanf("%s", estado);

    printf("Código da Carta: ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numeros de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    system ("clear");

   //operacões de densidade e PIB per Capita
   densiade = (float)populacao /  area;

   per_capita = (float)populacao / pib;

   // funçôes de saida de dados 
    printf("Informações da Cidade:\n");
    printf("-Código da Carta: %s\n", codigo);
    printf("-Nome da Cidade: %s\n", cidade);
    printf("-População: %d\n", populacao);
    printf("-Área: %.3f km²\n", area);
    printf("-PIB: %.0f bilhões de reais\n", pib);
    printf("-Numero de pontos turísticos: %d\n", pontos_turisticos);
    printf("-Densidade Populacional: %.3f\n", densiade);
    printf("-PIB per Capita: %.3f\n", per_capita);

    return 0;  
}
