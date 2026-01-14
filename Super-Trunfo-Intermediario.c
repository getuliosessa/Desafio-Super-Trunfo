#include<stdio.h>

int main(){
    //Declaração das variáveis que serão usadas no cadastro da Carta 1
    char estado1;
    char codigo1[50], nome1[50];
    int populacao1, pturistico1;
    float area1, pib1, denpop1, pibcapta1;

    //Entrada de Dados do Usuário para cadastro da Carta 1
    printf("*** Cadastre a 1ª Carta: *** \n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico1);

    //Cálculo da densidade populacional 1
    denpop1 = (float) populacao1 / area1;

    //Cálculo do PIB per Capita 1
    pibcapta1 = (float) pib1 / populacao1; 

    //Saída de Dados da Carta 1
    printf("----------------------------------------------\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pturistico1);
    printf("Densidade Populacional: %.2f [habitante/Km²]\n", denpop1);
    printf("PIB per Capita: %.2f [R$/habitante]\n", pibcapta1);
    printf("----------------------------------------------\n");

    //Declaração das variáveis que serão usadas no cadastro da Carta 2
    char estado2;
    char codigo2[50], nome2[50];
    int populacao2, pturistico2;
    float area2, pib2, denpop2, pibcapta2;

    //Entrada de dados do Usuário para cadastro da Carta 2
    printf("*** Cadastre a 2ª Carta: *** \n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: ");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico2);

    //Cálculo da densidade populacional 2
    denpop2 = (float) populacao2 / area2;

    //Cálculo do PIB per Capita 2
    pibcapta2 = (float) pib2 / populacao2;

    //Saída de Dados da Carta 2
    printf("----------------------------------------------\n");
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pturistico2);
    printf("Densidade Populacional: %.2f [habitante/Km²]\n", denpop2);
    printf("PIB per Capita: %.2f [R$/habitante]\n", pibcapta2);
    printf("----------------------------------------------\n");

    return 0;
}