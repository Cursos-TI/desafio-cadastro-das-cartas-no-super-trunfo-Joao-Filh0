#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4], codigo3[4], codigo4[4];
    int populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float pib1, pib2, pib3, pib4;
    int pontos_turisticos1, pontos_turisticos2, pontos_turisticos3, pontos_turisticos4;
    
    

    printf("\nCadastro da cidade 1:\n\n\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\nCadastro da cidade 2:\n");
    printf("Código da cidade (ex: A02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\nCadastro da cidade 3:\n");
    printf("Código da cidade (ex: B01): ");
    scanf("%s", codigo3);
    printf("População: ");
    scanf("%d", &populacao3);
    printf("Área (km²): ");
    scanf("%f", &area3);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib3);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos3);
    
    printf("\nCadastro da cidade 4:\n");
    printf("Código da cidade (ex: B02): ");
    scanf("%s", codigo4);
    printf("População: ");
    scanf("%d", &populacao4);
    printf("Área (km²): ");
    scanf("%f", &area4);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib4);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos4);
    
    printf("\nCidades cadastradas:\n");
    printf("##### - CIDADE 1 - #####");
    printf("\nCódigo: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n\n", codigo1, populacao1, area1, pib1, pontos_turisticos1);
    printf("##### - CIDADE 2 - #####");
    printf("\nCódigo: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n\n", codigo2, populacao2, area2, pib2, pontos_turisticos2);
    printf("##### - CIDADE 3 - #####");
    printf("\nCódigo: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n\n", codigo3, populacao3, area3, pib3, pontos_turisticos3);
    printf("##### - CIDADE 4 - #####");
    printf("\nCódigo: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n\n", codigo4, populacao4, area4, pib4, pontos_turisticos4);
    
    return 0;
}
