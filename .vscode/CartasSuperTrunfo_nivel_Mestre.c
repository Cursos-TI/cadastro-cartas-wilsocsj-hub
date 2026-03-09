#include <stdio.h>

int main(){
    int Carta1, Carta2;
    char Estado1[20], Estado2[20];
    char Codigo1[4], Codigo2[4];
    char Nome_da_Cidade1[20], Nome_da_Cidade2[20];
    int População1, População2;
    float Area_km²1, Area_km²2;
    float PIB_em_valor_reais1, PIB_em_valor_reais2;
    int Pontos_Turisticos1, Pontos_Turisticos2;
    float Densidade_Populacional1, Densidade_Populacional2;
    double PIB_per_capita1, PIB_per_capita2;
    float Super_Poder1, Super_Poder2;
    int Resultado = Carta1 > Carta2;

    /*
    in carta: numero inteiro a partir de 1.
    char estado: Digitar o nome de um dos oito estados escolhidos para o jogo.
    char codigo: Digitar o codigo com uma letra maiscula de A a H (representando um dos oito estados) e dois numeros de 01 a 04 (representando quatro cidades por estado)
    char nome da cidade: digitar o nome de uma das quatro cidades escolhidas para o jogo.
    int população: digite um numero inteiro sem pontos ou virgulas.
    float area_Km²: digite um numero inteiro, ponto e no maximo duas casas decimais.
    float PIB_em_valor_reais: digite um numero inteiro, ponto e no maximo duas casas decimais.
    int Pontos_Turisticos: digite a quantidade de pontos turisticos da cidade.  
    float densidade_populacional: razão entre população e área.
    float PIB_per_capita: razão entre PIB e população.
    float Super_Poder: Soma de população, área, PIB, Pib per capita, 1/desnidade populacional e pontos turisticos.
    int Resultado: comparação entre a população, área, PIB, PIB_per_capita, Pontos_Turisticos, densidade_populacional e Super_Poder da Carta 1 e da Carta 2, onde 1 Carta 1 venceu, 0 Carta 2 venceu.
    */

    printf("Digite o numero da carta: \n");
    scanf("%d", &Carta1);

    printf("Digite o nome do estado: \n");
    scanf("%s", &Estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", &Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nome_da_Cidade1);

    printf("Digite sua População: \n");
    scanf("%d", &População1);

    printf("Digite a Area em Km²: \n");
    scanf("%f", &Area_km²1);

    printf("Digite o PIB em valor reais: \n");
    scanf("%f", &PIB_em_valor_reais1);
    
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &Pontos_Turisticos1);
    
    Densidade_Populacional1 = (float) (População1 / Area_km²1);
    PIB_per_capita1 = (float) (PIB_em_valor_reais1 * 1000000000 / População1);
    Super_Poder1 = (float) (População1 + Area_km²1 + PIB_em_valor_reais1 + PIB_per_capita1 + (1.0f / Densidade_Populacional1) + Pontos_Turisticos1);
      
    /*

     printf("%formato1, %formato2, %formato3, %formato4, %formato5, %formato6, %formato7, %formato8", variavel1, variavel2, variavel3, variavel4, variavel5, variavel6, variavel7, variavel8)

    %d Imprime um inteiro decimal.
    %f Imprime um numero de ponto flutuante no formato padrão.
    %s Imprime uma cadeia (string) de caracteres.
    Densidade_Populacional: razão entre população e área.
    PIB_per_capita: razão entre PIB e população.
    Super_Poder: Soma de população, área, PIB, PIB per capita, 1/densidade populacional e pontos turisticos.

    */

    printf("Digite o numero da carta: \n");
    scanf("%d", &Carta2);

    printf("Digite o nome do estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", &Codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nome_da_Cidade2);

    printf("Digite sua População: \n");
    scanf("%d", &População2);

    printf("Digite a Area em Km²: \n");
    scanf("%f", &Area_km²2);

    printf("Digite o PIB em valor reais: \n");
    scanf("%f", &PIB_em_valor_reais2);
    
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &Pontos_Turisticos2);
    
    Densidade_Populacional2 = (float) (População2 / Area_km²2);
    PIB_per_capita2 = (float) (PIB_em_valor_reais2 * 1000000000 / População2);
    Super_Poder2 = (float) (População2 + Area_km²2 + PIB_em_valor_reais2 + PIB_per_capita2 + (1.0f / Densidade_Populacional2) + Pontos_Turisticos2);

    printf("Carta: %d\n", Carta1);
    printf("Nome do estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("Populaçao: %d\n", População1); 
    printf("Area: %.2f Km²\n", Area_km²1);
    printf("PIB: %.2f bilhões de reais\n", PIB_em_valor_reais1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", Densidade_Populacional1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita1);
    printf("Super Poder: %.2f pontos\n", Super_Poder1);   

    printf("Carta: %d\n", Carta2);
    printf("Nome do estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("Populaçao: %d\n", População2); 
    printf("Area: %.2f Km²\n", Area_km²2);
    printf("PIB: %.2f bilhões de reais\n", PIB_em_valor_reais2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", Densidade_Populacional2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita2);
    printf("Super Poder: %.2f pontos\n", Super_Poder2);

    printf("Comparação de cartas:\n");
    printf("População: Carta 1 venceu %d\n", População1 > População2);
    printf("Área: Carta 1 venceu %d\n", Area_km²1 > Area_km²2);
    printf("PIB: Carta 1 venceu  %d\n", PIB_em_valor_reais1 > PIB_em_valor_reais2);
    printf("Pontos Turísticos: Carta 1 venceu %d\n", Pontos_Turisticos1 > Pontos_Turisticos2);
    printf("Densidade Populacional: Carta 2 venceu %d\n", Densidade_Populacional1 < Densidade_Populacional2);
    printf("PIB per Capita: Carta 1 venceu %d\n", PIB_per_capita1 > PIB_per_capita2);
    printf("Super Poder: Carta1 venceu %d\n", Super_Poder1 > Super_Poder2);

    return 0;

}