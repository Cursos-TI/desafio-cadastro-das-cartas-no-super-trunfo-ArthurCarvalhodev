#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   char estado1, estado2;
    char codigoDaCarta1[10], codigoDaCarta2[10];
    char nomeDaCidade1[50], nomeDaCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numeroPontosTuristicos1, numeroPontosTuristicos2;

    // LEITURA DE DADOS - CARTA 1.
    printf("Carta 1: \n");

    printf("Digite uma letra de 'A' a 'H': \n");
    scanf("%s", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", &codigoDaCarta1);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomeDaCidade1);
    
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade(PIB = Produto Interno Bruto): \n");
    scanf("%f", &pib1);

    printf("Digite o número de Pontos Turísticos na Cidade: \n");
    scanf("%d", &numeroPontosTuristicos1);

    // RESULTADO - CARTA 1.
    printf("Carta 1: \n");

    printf("Estado: %c \n", estado1);
    
    printf("Código: %s \n", codigoDaCarta1);

    printf("Nome da Cidade: %s \n", nomeDaCidade1);

    printf("População: %d \n", populacao1);

    printf("area: %f \n", area1);

    printf("PIB: %f \n", pib1);

    printf("Número de Pontos Turísticos: %d \n", numeroPontosTuristicos1, '\n');

    // LEITURA DE DADOS - CARTA 2.
    printf("Carta 2: \n");

    printf("Digite uma letra de 'A' a 'H': \n");
    scanf("%s", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", &codigoDaCarta2);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomeDaCidade2);
    
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade(PIB = Produto Interno Bruto): \n");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turísticos na Cidade: \n");
    scanf("%d", &numeroPontosTuristicos2);

    // RESULTADO - CARTA 2.
    printf("Carta 2: \n");

    printf("Estado: %c \n", estado2);
    
    printf("Código: %s \n", codigoDaCarta2);

    printf("Nome da Cidade: %s \n", nomeDaCidade2);

    printf("População: %d \n", populacao2);

    printf("area: %f \n", area2);

    printf("PIB: %f \n", pib2);

    printf("Número de Pontos Turísticos: %d \n", numeroPontosTuristicos2);

    return 0;
}
