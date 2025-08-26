#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado , estado2;
    char codigo[5] , codigo2 [5];
    char cidade [20], cidade2 [20];
    unsigned long int populacao , populacao2;
    float area , area2; 
    float pib , pib2;
    int pontosturistico , pontosturistico2;
    float densidadepopulacional , densidadepopulacional2;
    float densidadepopulacionalinversa, densidadepopulacionalinversa2;
    float pibpercapita, pibpercapita2;
    float superPoder, superPoder2;
    int resultado;

    printf("Carta 1\n");

    printf("\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo );

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade);

    printf("Digite a população: ");
    scanf(" %d",&populacao);

    printf("Digite a área em km²: ");
    scanf(" %f", &area);

    printf("Digite o PIB: ");
    scanf(" %f", &pib);

    printf("Digite o ponto turistico: ");
    scanf(" %d", &pontosturistico);

    densidadepopulacional = populacao / area;
    
    pibpercapita = pib / populacao;

   superPoder = populacao + area + pib + pibpercapita + pontosturistico + densidadepopulacionalinversa;
    

    printf("\n");
    
    printf("Carta 1\n");

    printf("Estado: %c \n" , estado);

    printf("Código: %s \n" , codigo);
    
    printf("Cidade: %s \n" , cidade);

    printf("População: %d \n" , populacao);

    printf("Área: %f km² \n" , area);

    printf("PIB: %.2f bilhões de reais \n" , pib);

    printf("Pontos Turísticos: %d \n", pontosturistico);

    printf("A densidade populacional: %.2f hab/km² \n" ,densidadepopulacional);

    printf("O PIB per capita: %.2f reais \n" ,pibpercapita);

    printf("\n");




     printf("Carta 2\n");

     printf("\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo2 );

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a população: ");
    scanf(" %d",&populacao2);

    printf("Digite a área em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o ponto turistico: ");
    scanf(" %d", &pontosturistico2);

    densidadepopulacional2 = populacao2 / area2;

    pibpercapita2 = pib2 / populacao2;



    printf("\n");
    
    printf("Carta 2\n");

    printf("Estado:%c \n" , estado2);

    printf("Código: %s \n" , codigo2);
    
    printf("Cidade: %s \n" , cidade2);

    printf("População: %d \n" , populacao2);

    printf("Área: %f km² \n" , area2);

    printf("PIB: %.2f milhões de reais \n" , pib2);

    printf("Pontos Turísticos: %d \n", pontosturistico2);

    printf("A densidade populacional é:%.2f hab/km² \n" , densidadepopulacional2);
    
    printf("O PIB per capita é: %.2f reais \n" ,pibpercapita2);

    printf("\n");


  









    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
