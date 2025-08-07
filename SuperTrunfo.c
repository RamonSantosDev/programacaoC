#include <stdio.h>

int main () { //Comecei o Jogo declarando algumas variaveis.
    char estado[3], estado2[3];
    char codigo[10], codigo2[10];
    char cidade[50], cidade2[50];
    int populacao, populacao2, pontosT, pontosT2;
    float area, area2, PIB, PIB2;
    
    printf("------ Jogo Super Trunfo Países-------\n\n");
    printf("--------- Cadastro de Cartas -----------\n");
    printf("-------------- CARTA 1 -----------\n\n"); // Usei printf e scanf para mostra e armazena as informações do usuário CARTA 1.

    printf("Digite uma letra para representar um Estado: \n"); 
    scanf("%s", estado);

    printf("Digite o código do Estado: \n");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade);

    printf("Digite o numero de habitantes \n");
    scanf("%d", &populacao);

    printf("Digite a Area da cidade em m²: \n");
    scanf("%f", &area);

    printf("Digite o PIB (Produto interno Bruto) da cidade \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos turisticos: \n");
    scanf("%d", &pontosT);

    printf("-------------- CARTA 2 -----------\n\n"); // Usei printf e scanf para mostra e armazena as informações do usuário CARTA 2.
    printf("Digite uma letra para representar um Estado: \n");
    scanf("%s", estado2);
    
    printf("Digite o codigo do Estado \n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade \n");
    scanf("%s", cidade2);

    printf("Digite o numero de habitantes \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da cidade em m²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto interno Bruto) da cidade \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de Pontos turisticos: \n");
    scanf("%d", &pontosT2);

    printf("CARTA 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área m²: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Número de Pontos Turisticos: %d\n\n", pontosT);

    printf("CARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área m²: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Número de Pontos Turisticos: %d\n\n", pontosT2);

    return 0;

}
