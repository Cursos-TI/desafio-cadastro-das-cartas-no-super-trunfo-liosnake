#include <stdio.h>

int main() {

    printf("\nSuper Trunfo - Jogo de Cartas\n");

    printf("\ncarta 1\n");

    char Estado [50] = "São Paulo";
    char Codigo[50] = "A01";
    char Cidade[50] = "São Paulo";
    int População = 12325000;
    float Area = 1521.11;
    float PIB = 699.28;
    int pontosturisticos = 50;


    printf("\nDigite o Estado\n");
        scanf("%s", &Estado);
    printf("O Estado é: %s", Estado);

    printf("\nDigite o Codigo\n");
        scanf("%s", &Codigo);
    printf("O Codigo é: %s", Codigo);

    printf("\nDigite a Cidade\n");
        scanf("%s", &Cidade);    
    printf("A Cidade é: %s", Cidade);

    printf("\nDigite a População\n");
        scanf("%d", &População);    
    printf("A População é: %d", População);

    printf("\nDigite a Area\n");
        scanf("%f", &Area);    
    printf("Area é: %.2f km²", Area);

    printf("\nDigite o PIB\n");
        scanf("%f", &PIB);    
    printf("O PIB é: %.2f bilhões", PIB);

    printf("\nDigite o pontosturisticos\n");
        scanf("%d", &pontosturisticos);    
    printf("pontos turisticos são: %d\n", pontosturisticos);




    // Informações da segunda carta


     printf("\ncarta 2\n");

    char Estado2 [50] = "Rio de Janeiro";
    char Codigo2[50] = "A02";
    char Cidade2[50] = "Rio de Janeiro";
    int População2 = 6748000;
    float Area2 = 1200.25;
    float PIB2 = 300.50;
    int pontosturisticos2 = 30;


    printf("\nDigite o Estado\n");
        scanf("%s", &Estado2);
    printf("O Estado é: %s", Estado2);

    printf("\nDigite o Codigo\n");
        scanf("%s", &Codigo2);
    printf("O Codigo é: %s", Codigo2);

    printf("\nDigite a Cidade\n");
        scanf("%s", &Cidade2);    
    printf("A Cidade é: %s", Cidade2);

    printf("\nDigite a População\n");
        scanf("%d", &População2);    
    printf("A População é: %d", População2);

    printf("\nDigite a Area\n");
        scanf("%f", &Area2);    
    printf("Area é: %.2f km²", Area2);

    printf("\nDigite o PIB\n");
        scanf("%f", &PIB2);    
    printf("O PIB é: %.2f bilhões", PIB2);

    printf("\nDigite o pontosturisticos\n");
        scanf("%d", &pontosturisticos2);    
    printf("pontos turisticos são: %d", pontosturisticos2);
    
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


