#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Aluna Viviane Tavares Nascimento matricula 202504564977

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //foram criadas variáveis para cada carta a ser cadastrada e exibida.
    //variaveis char
    char estado[1],codigocarta[3],nomecidade[20],estado2[1],codigocarta2[3],nomecidade2[20];
    //variaveis float
    float area,pib,area2,pib2;
    //variaveis int
    int populacao,turismo,populacao2,turismo2;
    
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Você irá cadastrar duas cartas no momento! \n");
    printf("Dados da carta número 1. \n");
    printf("Estado: \n");
    scanf("%s", &estado);
    printf("Código: \n");
    scanf("%s", &codigocarta);
    printf("Nome da Cidade: \n");
    scanf("%s", &nomecidade);
    printf("População: \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo);

    printf("Dados da carta número 2. \n");
    printf("Estado: \n");
    scanf("%s", &estado2);
    printf("Código: \n");
    scanf("%s", &codigocarta2);
    printf("Nome da Cidade: \n");
    scanf("%s", &nomecidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("As cartas cadastradas foram: \n");
    //exibir dados para as cartas 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigocarta);
    printf("Nome da Cidade: %s \n", nomecidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turismo);

    //exibir dados para as cartas 2
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigocarta2);
    printf("Nome da Cidade: %s \n", nomecidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);
    
    return 0;
}
