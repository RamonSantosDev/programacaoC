#include <stdio.h>


int main() {
    
    // Comecei o Jogo declarando algumas Variaveis.
    char estado, estado2;
    char codigo[10], codigo2[10];
    char cidade[50], cidade2[50];

    unsigned long int populacao, populacao2; // unsigned log int serve para grandes populações.
    
    int pontosT, pontosT2;

    float densidadePo1, PIBper1, densidadePo2, PIBper2;
    float area, area2, PIB, PIB2;

    float superPoder1, superPoder2;
    
    printf("---- Jogo Super Trunfo Países -----\n\n");
    printf("------- Cadastro de Cartas --------\n");
    printf("------------- CARTA 1 -------------\n\n"); 
    // Usei printf e scanf para mostra e armazena as informações do usuário CARTA 1.
    printf("Digite uma letra para representar um Estado: "); 
    scanf(" %c", &estado);

    printf("Digite o código do Estado: ");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade);
 
    printf("Digite o numero de habitantes ");
    scanf("%lu", &populacao);

    printf("Digite a Area da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB (Produto interno Bruto) da cidade: ");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos turisticos: ");
    scanf("%d", &pontosT);

    printf("------------- CARTA 2 -------------\n\n");

    // Usei printf e scanf para mostra e armazena as informações do usuário CARTA 2.
    printf("Digite uma letra para representar um Estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo do Estado: ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite o numero de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto interno Bruto) da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de Pontos turisticos: ");
    scanf("%d", &pontosT2);

    // Calcula a Densidade Populacional e calcula o PIB per Capita.
    // Usei o casting para converte o tipo para float.
    densidadePo1 = (float) populacao / area;
    densidadePo2 = (float) populacao2 / area2;
    PIBper1 = (float) (PIB * 1000000000.0f) / populacao;
    PIBper2 = (float) (PIB2 * 1000000000.0f) / populacao2;

    //soma de todos os atributos
    superPoder1 = (float) populacao + area + PIB + PIBper1 + (float)pontosT + (1.0f / densidadePo1);
    superPoder2 = (float) populacao2 + area2 + PIB2 + PIBper2 + (float)pontosT2 + (1.0f / densidadePo2);

    // Usei o comado printf para exibir os valores armazenado nas variaveis.
    printf("------------- CARTA 1: -------------\n\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", PIB);
    printf("Número de Pontos Turisticos: %d\n", pontosT);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePo1);
    printf("PIB per Capita: R$ %.2f\n\n", PIBper1);
    
    // usei o comado printf para exibir os valores armazenado nas variaveis.
    printf("------------- CARTA 2: -------------\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Número de Pontos Turisticos: %d\n", pontosT2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePo2);
    printf("PIB per Capita: R$ %.2f\n", PIBper2);

    // comparando as cartas
    printf("------- Comparação de cartas ---------\n\n");
    printf("população: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
    printf("Pontos turisticos: Carta 1 venceu (%d)\n", pontosT > pontosT2);
    printf("Densidade populacional: Carta 2 venceu (%d)\n", densidadePo1 < densidadePo2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n ", PIBper1 > PIBper2);
    printf("Super poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}

