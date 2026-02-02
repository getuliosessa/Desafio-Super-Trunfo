#include<stdio.h>
#include<string.h>

int main(){

    //Declaração das variáveis que serão usadas no cadastro da Carta 1
    char pais1[100];
    int populacao1, pturistico1;
    float area1, pib1, denpop1, pibcapta1;

    //Entrada de Dados do Usuário para cadastro da Carta 1
    printf("*** Cadastre a 1ª Carta: *** \n");

    printf("País 1: ");
    fgets(pais1, sizeof(pais1), stdin);
    pais1[strcspn(pais1, "\n")] = '\0';

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico1);

    //Cálculo da densidade demografica 1
    denpop1 = (float) populacao1 / area1;

    //Cálculo do PIB per Capita 1
    pibcapta1 = (float) pib1 / populacao1; 

    //Saída de Dados da Carta 1
    printf("----------------------------------------------\n");
    printf("Carta 1: \n");
    printf("País: %s \n", pais1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f [Km²] \n", area1);
    printf("PIB: $ %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pturistico1);
    printf("Densidade Demográfica: %.2f [habitante/Km²]\n", denpop1);
    printf("PIB per Capita: %.2f [$/habitante]\n", pibcapta1);
    printf("----------------------------------------------\n");

    //Declaração das variáveis que serão usadas no cadastro da Carta 2
    char pais2[100];
    int populacao2, pturistico2;
    float area2, pib2, denpop2, pibcapta2;

    // limpa o buffer antes de usar fgets. Usar scanf e fgets da problema.
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}

    //Entrada de dados do Usuário para cadastro da Carta 2
    printf("*** Cadastre a 2ª Carta: *** \n");

    printf("País 2: ");
    fgets(pais2, sizeof(pais2), stdin);
    pais2[strcspn(pais2, "\n")] = '\0';

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: ");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &pturistico2);

    //Cálculo da densidade demografica 2
    denpop2 = (float) populacao2 / area2;

    //Cálculo do PIB per Capita 2
    pibcapta2 = (float) pib2 / populacao2;

    //Saída de Dados da Carta 2
    printf("----------------------------------------------\n");
    printf("Carta 2: \n");
    printf("País: %s \n", pais2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f [Km²]\n", area2);
    printf("PIB: $ %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pturistico2);
    printf("Densidade Demográfica: %.2f [habitante/Km²]\n", denpop2);
    printf("PIB per Capita: %.2f [$/habitante]\n", pibcapta2);
    printf("----------------------------------------------\n");

    //Cadastro das variáveis usadas no switch
    int opcao, escolha1, escolha2;

    //Implementação do Menu
    printf("** Escolha o 1º Atributo a ser comparado **\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de Pontos Turísticos \n");
    printf("5. Densidade Demográfica \n");
    printf("Digite o Número Escolhido:  ");
    scanf("%d", &escolha1);

    // limpa o buffer antes de usar fgets
    while ((c = getchar()) != '\n' && c != EOF) {}

    float resultado1, resultado2, soma1, soma2;
    char atributo1[100], atributo2[100];

    switch(escolha1){
        case 1:
        resultado1 = populacao1;
        resultado2 = populacao2;
        strcpy(atributo1, "POPULAÇÃO");
        break;
        case 2:
        resultado1 = area1;
        resultado2 = area2;
        strcpy(atributo1, "ÁREA");
        break;
        case 3:
        resultado1 = pib1;
        resultado2 = pib2;
        strcpy(atributo1, "PIB");
        break;
        case 4:
        resultado1 = pturistico1;
        resultado2 = pturistico2;
        strcpy(atributo1, "PONTOS TURÍSTICOS");
        break;
        case 5:
        resultado1 = denpop1;
        resultado2 = denpop2;
        strcpy(atributo1, "DENSIDADE POPULACIONAL");
        break;
        default:
        printf("OPÇÃO INVÁLIDA!!");
        return 0;
    }

    printf("** Escolha o 2º Atributo a ser comparado **\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de Pontos Turísticos \n");
    printf("5. Densidade Demográfica \n");
    printf("Digite o Número Escolhido:  ");
    scanf("%d", &escolha2);

    if(escolha1 ==  escolha2){
        printf("ESCOLHEU A MESMA OPÇÃO. REINICIE O JOGO!!\n");
        return 0;
    }
    else{
        switch (escolha2){
            case 1:
            soma1 = resultado1 + populacao1;
            soma2 = resultado2 + populacao2;
            strcpy(atributo2, "POPULAçÂO");
            break;
            case 2:
            soma1 = resultado1 + area1;
            soma2 = resultado2 + area2;
            strcpy(atributo2, "ÁREA");
            break;
            case 3:
            soma1 = resultado1 + pib1;
            soma2 = resultado2 + pib2;
            strcpy(atributo2, "PIB");
            break;
            case 4:
            soma1 = resultado1 + pturistico1;
            soma2 = resultado2 + pturistico2;
            strcpy(atributo2, "PONTOS TURÍSTICOS");
            break;
            case 5:
            soma1 = resultado1 + denpop1;
            soma2 = resultado2 + denpop2;
            strcpy(atributo2, "DENSIDADE POPULACIONAL");
            break;
            default:
            printf("OPÇÃO INVÁLIDA!!");
            return 0;
        }
    }

    // limpa o buffer antes de usar fgets
    while ((c = getchar()) != '\n' && c != EOF) {}

    if(soma1 == soma2){
        printf("--------------------------------------------------\n");
        printf("País 1: %s \n", pais1);
        printf("País 2: %s \n", pais2);
        printf("Atributos Escolhidos: %s e %s \n", atributo1, atributo2);
        printf("Soma dos atributos escolhidos - Carta 1: %.2f \n", soma1);
        printf("Soma dos atributos escolhidos - Carta 2: %.2f \n", soma2);
        printf("TEMOS UM EMPATE!");
        printf("--------------------------------------------------\n");
    }
    else{
        printf("--------------------------------------------------\n");
        printf("País 1: %s \n", pais1);
        printf("País 2: %s \n", pais2);
        printf("Atributos Escolhidos: %s e %s \n", atributo1, atributo2);
        printf("Soma dos atributos escolhidos - Carta 1: %.2f \n", soma1);
        printf("Soma dos atributos escolhidos - Carta 2: %.2f \n", soma2);
        printf("%s\n", (soma1 > soma2) ? "CARTA 1 VENCEU!\n" : "CARTA 2 VENCEU!\n");
        printf("--------------------------------------------------\n");
    }

   return 0;
}
