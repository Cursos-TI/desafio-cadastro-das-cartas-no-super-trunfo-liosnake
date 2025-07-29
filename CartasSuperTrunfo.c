#include <stdio.h>

int main() {

    printf("\nSuper Trunfo - Jogo de Cartas\n");

    printf("\ncarta 1\n");

    char Estado [50] = "A";
    char Codigo[50] = "A01";
    char Cidade[49] = "São Paulo";
    float População = 12325000;
    float Area = 1521.11;
    float PIB = 699.28;
    int pontosturisticos = 50;
    float Densidade = População/Area; //populção/area
    float Percapita= População/PIB; //PIB/População
    float media;
       

    printf("\nDigite o Estado\n");
        scanf("%s", Estado);
    printf("O Estado é: %s", Estado);

    printf("\nDigite o Codigo (3 digitos)\n");
        scanf("%s", Codigo);
    printf("O Codigo é: %s", Codigo);

        scanf("%49", Cidade);    
    printf("\nA Cidade é: %s", Cidade);

    printf("\nDigite a População\n");
        scanf("%f", População);    
    printf("A População é: %f", População);

    printf("\nDigite a Area\n");
        scanf("%f", &Area);    
    printf("Area é: %.2f km²", Area);

    printf("\nDigite o PIB\n");
        scanf("%f", &PIB);    
    printf("O PIB é: %.2f bilhões", PIB);

    printf("\nDigite os pontos turisticos\n");
        scanf("%d", &pontosturisticos);    
    printf("Os Pontos turisticos são: %d\n", pontosturisticos);

    media = (float)(População/Area) /2;
    printf("A Densidade Populacional é: %.2f\n", Densidade);
    
    media = (float)(População/PIB) /2;
    printf("PIB per Capita é: %.2f\n", Percapita);



    // Informações da segunda carta


     printf("\ncarta 2\n");

    char Estado2 [50] = "B";
    char Codigo2[50] = "B02";
    char Cidade2[49] = "Rio de Janeiro";
    float População2 = 6748000;
    float Area2 = 1200.25;
    float PIB2 = 300.50;
    int pontosturisticos2 = 30;
    float Densidade2 = População2/Area2; //populção/area
    float Percapita2= População2/PIB2; //PIB/População
    float media2;


    printf("\nDigite o Estado\n");
        scanf("%s", Estado2);
    printf("O Estado é: %s", Estado2);

    printf("\nDigite o Codigo (3 digitos)\n");
        scanf("%s", Codigo2);
    printf("O Codigo é: %s", Codigo2);

    scanf("%49", Cidade2);    
    printf("\nA Cidade é: %s", Cidade2);

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

     media2 = (float)(População2/Area2) /2;
    printf("A Densidade Populacional é: %.2f\n", Densidade2);
    
    media2 = (float)(População2/PIB2) /2;
    printf("PIB per Capita é: %.2f\n", Percapita2);
    
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


