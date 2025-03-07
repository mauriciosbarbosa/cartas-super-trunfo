#include<stdio.h>

int main(){

    // Declarando as variáveis
    char estad1[10], estad2[10], cod1[10], cod2[10],
    cid1[20], cid2[20];
    int pop1, pop2, tur1, tur2;
    float area1, area2, pib1, pib2;
    float superp1, superp2;

    // Cadastrando as cartas
    printf("\t---CADASTRANDO AS CARTAS---\n");

    // Cadastrando carta 1
    printf("\nCadastro das informações da Carta 1:\n");
    printf("Insira o Estado da Carta 1: ");
    scanf("%s", &estad1);
    printf("Insira o Código da Carta 1: ");
    scanf("%s", &cod1);
    printf("Insira o nome da cidade da Carta 1: ");
    scanf("%s", &cid1);
    printf("Insira a população da cidade da Carta 1: ");
    scanf("%d", &pop1);
    printf("Insira a área (em km²) da cidade da Carta 1: ");
    scanf("%f", &area1);
    printf("Insira o PIB (em bilhões de R$) da cidade da Carta 1: ");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos da cidade da Carta 1: ");
    scanf("%d", &tur1);
    superp1 = pop1 + area1 + pib1 + tur1 + ((pib1 * 1000000000) / pop1) + (1 / (pop1/area1));

    // Cadastrando Carta 2
    printf("\nCadastro das informações da Carta 2:\n");
    printf("Insira o Estado da Carta 2: ");
    scanf("%s", &estad2);
    printf("Insira o Código da Carta 2: ");
    scanf("%s", &cod2);
    printf("Insira o nome da cidade da Carta 2: ");
    scanf("%s", &cid2);
    printf("Insira a população da cidade da Carta 2: ");
    scanf("%d", &pop2);
    printf("Insira a área (em km²) da cidade da Carta 2: ");
    scanf("%f", &area2);
    printf("Insira o PIB (em bilhões de R$) da cidade da Carta 2: ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da cidade da Carta 2: ");
    scanf("%d", &tur2);
    superp2 = pop2 + area2 + pib2 + tur2 + ((pib2 * 1000000000) / pop2) + (1 / (pop2/area2));

    // Exibindo as informações das cartas
    printf("\n\t---INFORMAÇÕES DAS CARTAS---\n");
    printf("\nCarta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estad1, cod1, cid1);
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f bilhões de reais\n", pop1, area1, pib1);
    printf("Número de Pontos Turísticos: %d\n", tur1);
    printf("Densidade Populacional %.2f hab/km²\n", pop1 / area1);
    printf("PIB per Capita: %.2f reais\n", pib1 * 1000000000/ pop1);
    printf("\nCarta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estad2, cod2, cid2);
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f bilhões de reais\n", pop2, area2, pib2);
    printf("Número de Pontos Turísticos: %d\n", tur2);
    printf("Densidade Populacional %.2f hab/km²\n", pop2 / area2);
    printf("PIB per Capita: %.2f reais\n", pib2 * 1000000000 / pop2);

    // Comparando as cartas
    printf("\n\t---COMPARAÇÃO DE CARTAS---\n");
    int respop = pop1 > pop2,
    resarea = area1 > area2,
    respib = pib1 > pib2,
    restur = tur1 > tur2,
    resden = (pop1 / area1) < (pop2 / area2),
    respibp = (pib1 * 1000000000 / pop1) > (pib2 * 1000000000 / pop2);

    printf("População (Carta 1 MAIOR que Carta 2): %d\n", respop);
    printf("Área (Carta 1 MAIOR que Carta 2): %d\n", resarea);
    printf("PIB (Carta 1 MAIOR que Carta 2): %d\n", respib);
    printf("Pontos Turísticos (Carta 1 MAIOR que Carta 2): %d\n", restur);
    printf("Densidade Populacional (Carta 1 MENOR que Carta 2): %d\n", resden);
    printf("PIB per Capita (Carta 1 MAIOR que Carta 2): %d\n", respibp);
    printf("Super Poder (Carta 1 MAIOR que Carta 2): %d\n", superp1 > superp2);

    return 0;

}