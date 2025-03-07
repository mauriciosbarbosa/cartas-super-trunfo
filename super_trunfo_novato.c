#include<stdio.h>

int main(){

    // Declarando as variáveis
    char estad1[10], estad2[10], cod1[10], cod2[10],
    cid1[20], cid2[20];
    int pop1, pop2, tur1, tur2;
    float area1, area2, pib1, pib2;

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

    // Exibindo as informações das cartas
    printf("\n\t---INFORMAÇÕES DAS CARTAS---\n");
    printf("\nCarta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estad1, cod1, cid1);
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f bilhões de reais\n", pop1, area1, pib1);
    printf("Número de Pontos Turísticos: %d\n", tur1);
    printf("\nCarta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estad2, cod2, cid2);
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f bilhões de reais\n", pop2, area2, pib2);
    printf("Número de Pontos Turísticos: %d\n", tur2);

    return 0;

}