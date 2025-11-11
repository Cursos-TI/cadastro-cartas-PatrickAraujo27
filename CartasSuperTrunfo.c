#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    //Declaração das variáveis da primeira carta
    char estadoA;                  // Armazena a letra do estado (ex: 'A')
    char codigoCartaA[4];          // Armazena o código da carta (ex: "A01")
    char cidadeA[32];              // Armazena o nome da cidade (ex: "São Paulo")
    int populacaoA;                // Armazena a população da cidade
    float areaA;                   // Armazena a área da cidade em km²
    float pibA;                    // Armazena o PIB da cidade 
    int qtdPontosTuristicosA;      // Armazena o número de pontos turísticos

    //Declaração das variáveis da segunda carta
    char estadoB;
    char codigoCartaB[4];
    char cidadeB[32];
    int populacaoB;
    float areaB;
    float pibB;
    int qtdPontosTuristicosB;

    // Dados da primeira carta
    printf("Digite conforme solicitado as informações da primeira carta :");    //Título do questionário que será preenchido
    printf("\nEstado: \n");                                                     // Solicita o estado
    scanf(" %c", &estadoA);                                                     // Lê o caractere do estado
    printf("\nCódigo da Carta: \n");                                            // Solicita o código da carta
    scanf(" %s", codigoCartaA);                                                 // Lê a string do código
    printf("\nCidade: \n");                                                     // Solicita o nome da cidade
    scanf(" %s", cidadeA);                                                      // Lê a string da cidade
    printf("\nPopulação: \n");                                                  // Solicita a população
    scanf(" %i", &populacaoA);                                                  // Lê um número inteiro
    printf("\nÁrea (em km²): \n");                                              // Solicita a área
    scanf(" %f", &areaA);                                                       // Lê um número
    printf("\nPIB: \n");                                                        // Solicita o PIB
    scanf(" %f", &pibA);                                                        // Lê o valor do PIB
    printf("\nNúmero de Pontos Turísticos: \n");                                // Solicita a quantidade de pontos turísticos
    scanf(" %i", &qtdPontosTuristicosA);                                        // Lê o número inteiro de pontos turísticos

    // Dados da segunda carta
    printf("Digite conforme solicitado as informações da segunda carta :");
    printf("\nEstado: \n");
    scanf(" %c", &estadoB);
    printf("\nCódigo da Carta: \n");
    scanf(" %s", codigoCartaB);
    printf("\nCidade: \n");
    scanf(" %s", cidadeB);
    printf("\nPopulação: \n");
    scanf(" %i", &populacaoB);
    printf("\nÁrea (em km²): \n");
    scanf(" %f", &areaB);
    printf("\nPIB: \n");
    scanf(" %f", &pibB);
    printf("\nNúmero de Pontos Turísticos: \n");
    scanf(" %i", &qtdPontosTuristicosB);

     // Exibe os dados da primeira carta
    printf("Carta 1: \n");                                                  
    printf("Estado: %c\n", estadoA);                                        // Mostra o estado
    printf("Código: %c%s\n", estadoA, codigoCartaA);                        // Mostra o estado + código (ex: A01)
    printf("Nome da Cidade: %s\n", cidadeA);                                // Mostra o nome da cidade
    printf("População: %i\n", populacaoA);                                  // Mostra a população
    printf("Área: %.2f km²\n", areaA);                                      // Mostra a área com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pibA);                           // Mostra o PIB formatado
    printf("Número de Pontos Turísticos: %i\n", qtdPontosTuristicosA);      // Mostra os pontos turísticos

    // Exibe os dados da segunda carta
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estadoB);
    printf("Código: %c%s\n", estadoB, codigoCartaB);
    printf("Nome da Cidade: %s\n", cidadeB);
    printf("População: %i\n", populacaoB);
    printf("Área: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Número de Pontos Turísticos: %i\n", qtdPontosTuristicosB);

    

    return 0;
}
