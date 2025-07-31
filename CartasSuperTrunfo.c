

#include <stdio.h>



int main() {

    printf("\nSuper Trunfo - Jogo de Cartas\n");

    printf("\ncarta 1\n");

    char Estado1;
    char Codigo[50] = "A01";
    char Cidade[50] = "São Paulo";
    unsigned long int Populacao = 1232500000;
    float Area = 1521.11;    
    float PIB = 699.28;
    int pontosturisticos = 50;
    float Densidade = (float)Populacao / Area;//populção/area
    float Percapita = (PIB * 1e9) / Populacao; //PIB/População
    


    printf("\nDigite o Estado\n");
    scanf(" %c", &Estado1);

    printf("\nDigite o Codigo (3 digitos)\n");
    scanf("%s", Codigo);
    printf("O Codigo é: %s", Codigo);

    printf("\nDigite a cidade\n");
    scanf(" %[^\n]", Cidade);    
    printf("\nA Cidade é: %s", Cidade);

    printf("\nDigite a População\n");
    scanf("%lu", &Populacao);    
    printf("\nA População é: %lu habitantes", Populacao);

    printf("\nDigite a Area\n");
    scanf("%f", &Area);    
    printf("\nA Area é: %.2f km²", Area);

    printf("\nDigite o PIB\n");
    scanf("%f", &PIB);    
    printf("\nO PIB é: %.2f Bilhões", PIB);

    printf("\nDigite o pontosturisticos\n");
    scanf("%d", &pontosturisticos);    
    printf("\nO pontosturisticos é: %d", pontosturisticos);

    
    printf("A Densidade Populacional é: %.2f\n", Densidade);

   
    printf("A Densidade Renda Per-Capita é: %.2f\n", Percapita);


    // Exibição dos Dados das Cartas:
    printf("\nCarta 01\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %lu habitantes\n", Populacao);
    printf("Area: %.2f km²\n", Area);
    printf("PIB: %.2f Bilhões\n", PIB);
    printf("O pontosturisticos é: %d\n", pontosturisticos);
    printf("A Densidade Populacional é: %.2f\n", Densidade);
    printf("A Densidade Renda Per-Capita é: %.2f\n", Percapita);

    //informações da carta 2//

    char Estado2;
    char Codigo2[50] = "B02";
    char Cidade2[49] = "Rio de Janeiro";
    unsigned long int Populacao2 = 6748000;
    float Area2 = 1200.25;
    float PIB2 = 300.50;
    int pontosturisticos2 = 30;
    float Densidade2 = (float)Populacao2/Area2; //populção/area
    float Percapita2= (PIB2 * 1e9)/Populacao2; //PIB/População
    

    printf("\nDigite o Estado\n");
    scanf(" %c", &Estado2);

    printf("\nDigite o Codigo (3 digitos)\n");
    scanf("%s", Codigo2);
    printf("O Codigo é: %s", Codigo2);

    printf("\nDigite a cidade\n");
    scanf(" %[^\n]", Cidade2);;    
    printf("\nA Cidade é: %s", Cidade2);

    printf("\nDigite a População\n");
    scanf("%lu", &Populacao2);    
    printf("\nA População é: %lu habitantes", Populacao2);

    printf("\nDigite a Area\n");
    scanf("%f", &Area2);    
    printf("\nA Area é: %.2f km²", Area2);

    printf("\nDigite o PIB\n");
    scanf("%f", &PIB2);    
    printf("\nO PIB é: %.2f Bilhões", PIB2);

    printf("\nDigite o pontosturisticos\n");
    scanf("%d", &pontosturisticos2);    
    printf("\nO pontosturisticos é: %d", pontosturisticos2);

    
    
    printf("A Densidade Populacional é: %.2f\n", Densidade2);

    
    printf("A Densidade Renda Per-Capita é: %.2f\n", Percapita2);


    // Exibição dos Dados das Cartas:
    printf("\nCarta 02\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %lu habitantes\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("O pontosturisticos é: %d\n", pontosturisticos2);
    printf("A Densidade Populacional é: %.2f\n", Densidade2);
    printf("A Densidade Renda Per-Capita é: %.2f\n", Percapita2);



    

    

    return 0;
}

