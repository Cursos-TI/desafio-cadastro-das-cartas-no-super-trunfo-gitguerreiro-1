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

    //Cadastro 1
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
    scanf(" %[^\n]", nome);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n---- DADOS DA CIDADE ----\n");

    printf("o codigo da cidade é: %d \n", codigo_da_cidade);
    printf("a polpulaçao: %.2lf habitantes\n", populacao);
    printf("area de %.2lf km²\n", area);
    printf("numero de pontos turisticos: %d \n", numero_de_pontos_turisticos);
    printf("PIB: R$ %.2lf bilhões\n", PIB);
    printf("Nome da cidade: %s \n", nome );


    //2cadastro
    printf("\nsegundo cadastro de carta\n");


    printf("\nDigite o codigo_da_cidade:\n");
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
    scanf(" %[^\n]", nome);


    printf("\n---- DADOS DA CIDADE ----\n");

    printf("o codigo da cidade é: %d \n", codigo_da_cidade);
    printf("a polpulaçao: %.2lf habitantes\n", populacao);
    printf("area de %.2lf km²\n", area);
    printf("numero de pontos turisticos: %d \n", numero_de_pontos_turisticos);
    printf("PIB: R$ %.2lf bilhões\n", PIB);
    printf("Nome da cidade: %s \n", nome );

    return 0;

}