#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   printf ("Cartas super trunfo!\n"); // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo_da_cidade;
    double populacao;
    double area;
    int numero_de_pontos_turisticos;
    double PIB;
    char nome[20];


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo_da_cidade:\n");
     scanf("%d", &codigo_da_cidade);

    printf("digite a populacao:\n");
    scanf ("%lf", &populacao);
    
    printf("digite area:\n");
    scanf("%lf", &area);

    printf("digite o numero de pontos turisticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);
     
    printf("digite o pib da cidade:\n");
    scanf("%lf", &PIB);        
     
    printf("digite o nome da cidade:\n");
    scanf("%s", nome);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
