#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigoCarta1, codigoCarta2;
    char nomeDaCidade1[10], nomeDaCidade2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int NumPontosTuristicos1, NumPontosTuristicos2;

    printf("\nBem-vindo ao jogo Super Trunfo de Cidades Brasileiras! \n");
    printf("Vamos começar cadastrando a primeira carta. \n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados). \n");
    scanf(" %c", &estado1);

    printf("Escolha um número de 01 a 04 e coloque a letra escolhida anteriormente na frente (ex: A01, B03) \n");
    scanf(" %c", &codigoCarta1);

    printf("Nome da cidade (máximo de 10 caracteres): \n");
    scanf("%9s", nomeDaCidade1);

    printf("O numero de habitantes (número inteiro): \n");
    scanf(" %d", &populacao1);

    printf("A área em km² (número real): \n");
    scanf(" %f", &area1);

    printf("O PIB em bilhões (número real): \n");
    scanf(" %f", &pib1);

    printf("O número de pontos turísticos (número inteiro): \n");
    scanf(" %d", &NumPontosTuristicos1);

    printf("\nAgora vamos cadastrar a segunda carta. \n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados). \n");
    scanf(" %c", &estado2);

    printf("Escolha um número de 01 a 04 e coloque a letra escolhida anteriormente na frente (ex: A01, B03) \n");
    scanf(" %c", &codigoCarta2);

    printf("Nome da cidade (máximo de 10 caracteres): \n");
    scanf("%9s", nomeDaCidade2);

    printf("O numero de habitantes (número inteiro): \n");
    scanf(" %d", &populacao2);

    printf("A área em km² (número real): \n");
    scanf(" %f", &area2);

    printf("O PIB em bilhões (número real): \n");
    scanf(" %f", &pib2);

    printf("O número de pontos turísticos (número inteiro): \n");
    scanf(" %d", &NumPontosTuristicos2);

    printf("\nAs cartas cadastradas foram: \n");
    printf("Carta 1: %c%c, Cidade: %s, População: %d, Área: %.2f km², PIB: %.2f bilhões, Pontos Turísticos: %d \n",
           estado1, codigoCarta1, nomeDaCidade1, populacao1, area1, pib1, NumPontosTuristicos1);
    printf("Carta 2: %c%c, Cidade: %s, População: %d, Área: %.2f km², PIB: %.2f bilhões, Pontos Turísticos: %d \n",
           estado2, codigoCarta2, nomeDaCidade2, populacao2, area2, pib2, NumPontosTuristicos2);

    return 0;
}
