

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("\nSuper Trunfo - Jogo de Cartas\n");

    printf("\ncarta 1\n");

    
    char Codigo[50] = "A01";
    char Cidade[49] = "São Paulo";
    float Populacao = 12325000.00;
    float Area = 1521.11;
    float PIB = 699.28;
    int pontosturisticos = 50;
    float Densidade = Populacao/Area; //populção/area
    float Percapita= Populacao/PIB; //PIB/População
    float media;

    printf("\nDigite o Codigo (3 digitos)\n");
    scanf("%s", Codigo);
    printf("O Codigo é: %s", Codigo);

    printf("\nDigite a cidade\n");
    scanf("%s", Cidade);    
    printf("\nA Cidade é: %s", Cidade);

    printf("\nDigite a População\n");
    scanf("%f", Populacao);    
    printf("\nA População é: %.2f milhões", Populacao);

    printf("\nDigite a Area\n");
    scanf("%f", Area);    
    printf("\nA Area é: %.2f km²", Area);

    printf("\nDigite o PIB\n");
    scanf("%f", PIB);    
    printf("\nO PIB é: %.2f Bilhões", PIB);

    printf("\nDigite o pontosturisticos\n");
    scanf("%d", &pontosturisticos);    
    printf("\nO pontosturisticos é: %d", pontosturisticos);

    printf("\nDigite a Densidade Populacional\n");
    scanf("%f", Densidade);
    media = (float)(Populacao/Area) /2;
    printf("A Densidade Populacional é: %.2f\n", Densidade);

    printf("\nDigite a Renda Per-Capita\n");
    scanf("%f", Percapita);
    media = (float)(Populacao/Percapita) /2;
    printf("A Densidade Renda Per-Capita é: %.2f\n", Percapita);


    // Exibição dos Dados das Cartas:
    printf("\nCarta 01\n");
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %.2f milhões\n", Populacao);
    printf("Area: %.2f km²\n", Area);
    printf("PIB: %.2f Bilhões\n", PIB);
    printf("A Densidade Populacional é: %.2f\n", Densidade);
    printf("A Densidade Renda Per-Capita é: %.2f\n", Percapita);

    //informações da carta 2//

    char Codigo2[50] = "B02";
    char Cidade2[49] = "Rio de Janeiro";
    float Populacao2 = 6748000;
    float Area2 = 1200.25;
    float PIB2 = 300.50;
    int pontosturisticos2 = 30;
    float Densidade2 = Populacao2/Area2; //populção/area
    float Percapita2= Populacao2/PIB2; //PIB/População
    float media2;

    printf("\nDigite o Codigo (3 digitos)\n");
    scanf("%s", Codigo2);
    printf("O Codigo é: %s", Codigo2);

    printf("\nDigite a cidade\n");
    scanf("%s", Cidade2);    
    printf("\nA Cidade é: %s", Cidade2);

    printf("\nDigite a População\n");
    scanf("%f", Populacao2);    
    printf("\nA População é: %.2f milhões", Populacao2);

    printf("\nDigite a Area\n");
    scanf("%f", Area2);    
    printf("\nA Area é: %.2f km²", Area2);

    printf("\nDigite o PIB\n");
    scanf("%f", PIB2);    
    printf("\nO PIB é: %.2f Bilhões", PIB2);

    printf("\nDigite o pontosturisticos\n");
    scanf("%d", &pontosturisticos2);    
    printf("\nO pontosturisticos é: %d", pontosturisticos2);

    printf("\nDigite a Densidade Populacional\n");
    scanf("%f", Densidade2);
    media2 = (float)(Populacao2/Area2) /2;
    printf("A Densidade Populacional é: %.2f\n", Densidade);

    printf("\nDigite a Renda Per-Capita\n");
    scanf("%f", Percapita2);
    media2 = (float)(Populacao2/Percapita2) /2;
    printf("A Densidade Renda Per-Capita é: %.2f\n", Percapita);


    // Exibição dos Dados das Cartas:
    printf("\nCarta 02\n");
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %.2f milhões\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("A Densidade Populacional é: %.2f\n", Densidade2);
    printf("A Densidade Renda Per-Capita é: %.2f\n", Percapita2);



    

    





    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}





    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


