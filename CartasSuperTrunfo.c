#include <stdio.h>
#include <string.h>

int main() {
    char codigo1[4], codigo2[4], codigo3[4], codigo4[4];
    int populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float pib1, pib2, pib3, pib4;
    int pontos_turisticos1, pontos_turisticos2, pontos_turisticos3, pontos_turisticos4;
    float densidade_populacional1, densidade_populacional2, densidade_populacional3, densidade_populacional4;
    float pib_per_capita1, pib_per_capita2, pib_per_capita3, pib_per_capita4;

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

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    densidade_populacional3 = populacao3 / area3;
    pib_per_capita3 = pib3 / populacao3;

    densidade_populacional4 = populacao4 / area4;
    pib_per_capita4 = pib4 / populacao4;

    printf("\nCidades cadastradas:\n");
    printf("##### - CIDADE 1 - #####");
    printf(
        "\nCódigo: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f bilhões\n\n",
        codigo1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1);

    printf("##### - CIDADE 2 - #####");
    printf(
        "\nCódigo: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f bilhões\n\n",
        codigo2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2);

    printf("##### - CIDADE 3 - #####");
    printf(
        "\nCódigo: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f bilhões\n\n",
        codigo3, populacao3, area3, pib3, pontos_turisticos3, densidade_populacional3, pib_per_capita3);

    printf("##### - CIDADE 4 - #####");
    printf(
        "\nCódigo: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f bilhões\n\n",
        codigo4, populacao4, area4, pib4, pontos_turisticos4, densidade_populacional4, pib_per_capita4);


    char carta1[4], carta2[4];
    printf("Digite o código das duas cartas que deseja comparar (ex: A01 A02): ");
    scanf("%s %s", carta1, carta2);

    float super_poder1, super_poder2;
    if (strcmp(carta1, codigo1) == 0) {
        super_poder1 = populacao1 + pib1 + pontos_turisticos1 + densidade_populacional1 + pib_per_capita1;
    } else if (strcmp(carta1, codigo2) == 0) {
        super_poder1 = populacao2 + pib2 + pontos_turisticos2 + densidade_populacional2 + pib_per_capita2;
    } else if (strcmp(carta1, codigo3) == 0) {
        super_poder1 = populacao3 + pib3 + pontos_turisticos3 + densidade_populacional3 + pib_per_capita3;
    } else if (strcmp(carta1, codigo4) == 0) {
        super_poder1 = populacao4 + pib4 + pontos_turisticos4 + densidade_populacional4 + pib_per_capita4;
    }

    if (strcmp(carta2, codigo1) == 0) {
        super_poder2 = populacao1 + pib1 + pontos_turisticos1 + densidade_populacional1 + pib_per_capita1;
    } else if (strcmp(carta2, codigo2) == 0) {
        super_poder2 = populacao2 + pib2 + pontos_turisticos2 + densidade_populacional2 + pib_per_capita2;
    } else if (strcmp(carta2, codigo3) == 0) {
        super_poder2 = populacao3 + pib3 + pontos_turisticos3 + densidade_populacional3 + pib_per_capita3;
    } else if (strcmp(carta2, codigo4) == 0) {
        super_poder2 = populacao4 + pib4 + pontos_turisticos4 + densidade_populacional4 + pib_per_capita4;
    }

    printf("\nResultado da comparação:\n");
    printf("Densidade Populacional: %s\n", (super_poder1 < super_poder2) ? carta1 : carta2);
    printf("Super Poder carta! Qual maior de duas ");
    return 0;
}
