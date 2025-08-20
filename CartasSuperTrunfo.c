#include <stdio.h>



int main() {

    printf("\nSuper Trunfo - Jogo de Cartas\n");

    printf("\ncarta 1\n");

    char Estado1;
    char Codigo1[50] = "A01";
    char Cidade1[50] = "São Paulo";
    unsigned long int Populacao1 = 1232500000;
    float Area1 = 1521.11;    
    float PIB1 = 699.28;
    int pontosturisticos1 = 50;
    float Densidade1;
    float Percapita1;
    float superpoder1;


    
//usuaria pode inserir os dados

    printf("\nDigite o Estado\n");
    scanf(" %c", &Estado1);

    printf("\nDigite o Codigo (3 digitos)\n");
    scanf("%19s", Codigo1);
    printf("\nO Codigo é: %s", Codigo1);

    printf("\nDigite a cidade\n");
    scanf(" %49[^\n]", Cidade1);   
    printf("\nA Cidade é: %s", Cidade1);

    printf("\nDigite a População\n");
    scanf("%lu", &Populacao1);    
    printf("\nA População é: %lu habitantes", Populacao1);

    printf("\nDigite a Area\n");
    scanf("%f", &Area1);    
    printf("\nA Area é: %.2f km²", Area1);

    printf("\nDigite o PIB\n");
    scanf("%f", &PIB1);    
    printf("\nO PIB é: %.2f Bilhões", PIB1);

    printf("\nDigite o pontosturisticos\n");
    scanf("%d", &pontosturisticos1);    
    printf("\nO pontosturisticos é: %d", pontosturisticos1);

    
    printf("A Densidade Populacional é: %.2f\n", Densidade1);

   
    printf("A Densidade Renda Per-Capita é: %.2f\n", Percapita1);

       //// Cálculos da Carta 1
    Densidade1 = (float)Populacao1/Area1; 
    Percapita1 = (PIB1 * 1e9)/Populacao1; 
    superpoder1 = (Populacao1+Area1+pontosturisticos1+Percapita1+(1.0/Densidade1));


    // Exibição dos Dados das Cartas:
    printf("\nCarta 01\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %lu habitantes\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f Bilhões\n", PIB1);
    printf("O pontosturisticos é: %d\n", pontosturisticos1);
    printf("A Densidade Populacional é: %.2f\n", Densidade1);
    printf("A Densidade Renda Per-Capita é: %.2f\n", Percapita1);
    printf("O Super Poder 1 é: %.2f\n", superpoder1);

    //informações da carta 2//

    char Estado2;
    char Codigo2[50] = "B02";
    char Cidade2[49] = "Rio de Janeiro";
    unsigned long int Populacao2 = 6000000;
    float Area2 = 1200.25;
    float PIB2 = 300.50;
    int pontosturisticos2 = 30;
    float Densidade2; 
    float Percapita2; 
    float superpoder2; 
    

    printf("\nDigite o Estado\n");
    scanf(" %c", &Estado2);

    printf("\nDigite o Codigo (3 digitos)\n");
    scanf("%19s", Codigo2);
    printf("\nO Codigo é: %s", Codigo2);

    printf("\nDigite a cidade\n");
    scanf(" %49[^\n]", Cidade2);   
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

    //// Cálculos da Carta 2
    Densidade2 = (float)Populacao2/Area2; 
    Percapita2 = (PIB2 * 1e9)/Populacao2; 
    superpoder2 = (Populacao2+Area2+pontosturisticos2+Percapita2+(1.0/Densidade2));
    
    printf("\nA Densidade Populacional é: %.2f\n", Densidade2);

    
    printf("\nA Densidade Renda Per-Capita é: %.2f\n", Percapita2);


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
    printf("O Super Poder 2 é: %.2f\n", superpoder2);

    //(1 para carta1 > carta2 –  0 Carta 1 vence – e  –  1 Carta 2 vence)

    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7; 

    resultado1 = Populacao1 > Populacao2;
    resultado2 = Area1 > Area2;
    resultado3 = PIB1 > PIB2;
    resultado4 = pontosturisticos1 > pontosturisticos2;
    resultado5 = Densidade1 < Densidade2;
    resultado6 = Percapita1 > Percapita2;
    resultado7 = superpoder1 > superpoder2;
    printf("A população é %d\n", resultado1);
    printf("A Area é %d\n", resultado2);
    printf("A PIB é %d\n", resultado3);
    printf("A pontos turisticos é %d\n", resultado4);
    printf("A Densidade é %d\n", resultado5);
    printf("A Renda-Percapita é %d\n", resultado6);
    printf("A super poder é %d\n", resultado7);

    //desafio if e else aventureiro...

    int escolha; // adicionado para o menu do jogo

    printf("\n**Bem-vindo ao jogo SuperTrunfo**\n");
    printf("Escolha uma opção:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite sua escolha (1, 2, 3, 4 ou 5):\n");
     scanf("%d", &escolha);


      switch (escolha) {
        case 1: // caso 1 trabalha a escolha de população
            printf("Você escolheu (Atributo: População) - \n");
            
            if (Populacao1 > Populacao2) {
        printf("**Voce venceu**...A carta 1 é maior que a carta 2\n");
    }
    else if (Populacao1 < Populacao2) {
        printf("**Voce perdeu**...A carta 2 é maior que a carta 1\n");
    }
    else {
        printf("**Empate** As cartas são iguais\n");
    }
    break;
            
        case 2: // caso 2 trabalha a escolha de Area 
            printf("Você escolheu (Atributo: Área) - \n");
            if (Area1 > Area2) {
        printf("**Voce venceu**...A carta 1 é maior que a carta 2\n");
    }
    else if (Area1 < Area2) {
        printf("**Voce perdeu**...A carta 2 é maior que a carta 1\n");
    }
    else {
        printf("**Empate** As cartas são iguais\n");
    }
    break;
            
        case 3:  // caso 3 trabalha a escolha de PIB
            printf("Você escolheu (Atributo: PIB) - \n");
            if (PIB1 > PIB2) {
        printf("**Voce venceu**...A carta 1 é maior que a carta 2\n");
    }
    else if (PIB1 < PIB2) {
        printf("**Voce perdeu**...A carta 2 é maior que a carta 1\n");
    }
    else {
        printf("**Empate** As cartas são iguais\n");
    }
    break;
     
        case 4: // caso 4 trabalha a escolha de Pontos turisticos
            printf("Você escolheu (Atributo: Número de pontos turísticos) - \n");
             if (pontosturisticos1 > pontosturisticos2) {
        printf("**Voce venceu**...A carta 1 é maior que a carta 2\n");
    }
    else if (pontosturisticos1 < pontosturisticos2) {
        printf("**Voce perdeu**...A carta 2 é maior que a carta 1\n");
    }
    else {
        printf("**Empate** As cartas são iguais\n");
    }
    break;
          
        case 5: // caso 5 trabalha a escolha de densidade
            printf("Você escolheu (Atributo: Densidade demográfica) - \n");
            if (Densidade1 < Densidade2) {
        printf("**Voce venceu**...A carta 1 é maior que a carta 2\n");
    }
    else if (Densidade1 > Densidade2) {
        printf("**Voce perdeu**...A carta 2 é maior que a carta 1\n");
    }
    else {
        printf("**Empate** As cartas são iguais\n");
    }
    break;
    
    default: // este serve se o usuario digitar numeto diferente.
            printf("Opção inválida. Por favor, escolha 1, 2 ou 3.\n");
    }

            
      return 0;
}