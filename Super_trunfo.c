#include <stdio.h>

int main() {  
   // variáveis
    char estado [50];
    char codigo [10];
    char cidade [50];
    float area, pib;
    int pontos_turisticos, populacao;

   // Códigos para a entrada de dados 
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

   // Código para a saida de dados 
    printf("Informações da Cidade:\n");
    printf("-Código da Carta: %s\n", cidade);
    printf("-Nome da Cidade: %s\n", codigo);
    printf("-População: %d\n", populacao);
    printf("-Área: %.3f km²\n", area);
    printf("-PIB: %.3f bilhões de reais\n", pib);
    printf("-Numero de pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
