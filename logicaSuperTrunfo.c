#include <stdio.h>

int main(){
    // Declarando as variáveis
    char estado1[30], estado2[30];
    char codigo_carta1[5], codigo_carta2[5], nome_cidade1[30], nome_cidade2[30];
    unsigned long int populacao1, populacao2;
    float superPoder1, superPoder2;
    int pontos_turistico1, pontos_turistico2;
    float area1, area2, pib1, pib2, densidade1, densidade2, perCapta1, perCapta2;


    // Entrada do usuário para carta1
    printf("Carta1 \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigo_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade1);

    printf("Digite o total da população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turistico1);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &area1);

    printf("Digite o pib: \n");
    scanf("%f", &pib1);


    // Entrada do usuário para carta2
    printf("Carta2 \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade2);

    printf("Digite o total da população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turistico2);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);
    printf("\n");

    // Formula para calculo da densidade e renda
    // Carta 1
    densidade1 = populacao1 / area1;
    perCapta1 = (unsigned long int) pib1 / populacao1;
    superPoder1 += (populacao1 + pontos_turistico1 + area1 + pib1 + perCapta1) - densidade1;

    // Carta 2
    densidade2 = populacao2 / area2;
    perCapta2 =(unsigned long int) pib2 / populacao2;
    superPoder2 = (populacao2 + pontos_turistico2 + area2 + pib2 + perCapta2) - densidade2;

    //Exibindo os dados das cartas
    printf("\nCarta1");
    printf("\nEstado: %s", estado1);
    printf("\nCódigo da carta: %s", codigo_carta1);
    printf("\nNome da cidade: %s", nome_cidade1);
    printf("\nPopulação: %lu", populacao1);
    printf("\nÁrea em km²: %.2f", area1);
    printf("\nPib: %.2f", pib1);
    printf("\nNúmero de pontos turísticos: %d", pontos_turistico1);
    printf("\nDensidade populacional: %.2f hab/km²", densidade1);
    printf("\nPib PerCapta: %.2f Reais", perCapta1);
    printf("\nSuper Poder: %f", superPoder1);
    printf("\n");

    printf("\nCarta2");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo da carta: %s", codigo_carta2);
    printf("\nNome da cidade: %s", nome_cidade2);
    printf("\nPopulação: %lu", populacao2);
    printf("\nÁrea em km²: %.2f", area2);
    printf("\nPib: %.2f", pib2);
    printf("\nNúmero de pontos turísticos: %d", pontos_turistico2);
    printf("\nDensidade populacional: %.2f hab/km²", densidade2);
    printf("\nPib PerCapta: %.2f Reais", perCapta2);
    printf("\nSuper Poder: %f", superPoder2);
    printf("\n");

    // Comparando as cartas
    printf("\n*** Comparação das Cartas ***\n");
    /*
    printf("\nPopulação: Carta 1 (%d) Carta 2 (%d)", populacao1 > populacao2, populacao1 < populacao2);
    printf("\nÁrea: Carta 1 (%d) Carta 2 (%d)", area1 > area2, area1 < area2);
    printf("\nPib: Carta 1 (%d) Carta 2 (%d)", pib1 > pib2, pib1 < pib2);
    printf("\nPontos Turísticos: Carta 1 (%d) Carta 2 (%d)", pontos_turistico1 > pontos_turistico2, pontos_turistico1 < pontos_turistico2);
    printf("\nDensidade Populacional: Carta 1 (%d) Carta 2 (%d)", densidade1 < densidade2, densidade1 > densidade2);
    printf("\nPib Per Capta: Carta 1 (%d) Carta 2 (%d)", perCapta1 > perCapta2, perCapta1 < perCapta2);
    printf("\nSuper Poder: Carta 1 (%d) Carta 2 (%d)", superPoder1 > superPoder2, superPoder1 < superPoder2);
    */
    printf("Super Poder Carta 1 %f x %f Super Poder Carta 2\n", superPoder1, superPoder2);
    if (superPoder1 > superPoder2){
        printf("A Carta 1 Venceu!\n");
    } else {
        printf("A Carta 2 Venceu!\n");
    }

    return 0;

}