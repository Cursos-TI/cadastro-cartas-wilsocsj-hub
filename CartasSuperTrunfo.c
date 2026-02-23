#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    int Carta;
    char Estado [20];
    char Codigo [4];
    char Nome_da_Cidade[20];
    int População;
    float Area_km²;
    float PIB_em_valor_reais;
    int Pontos_Turisticos;

    /*
    in carta: numero inteiro a partir de 1.
    char estado: Digitar o nome de um dos oito estados escolhidos para o jogo.
    char codigo: Digitar o codigo com uma letra maiscula de A a H (representando um dos oito estados) e dois numeros de 01 a 04 (representando quatro cidades por estado)
    char nome da cidade: digitar o nome de uma das quatro cidades escolhidas para o jogo.
    int população: digite um numero inteiro sem pontos ou virgulas.
    float area_Km²: digite um numero inteiro, ponto e no maximo duas casas decimais.
    float PIB_em_valor_reais: digite um numero inteiro, ponto e no maximo duas casas decimais.
    int Pontos_Turisticos: digite a quantidade de pontos turisticos da cidade.  

    */

    printf("Digite o numero da carta: \n");
    scanf("%d", &Carta);

    printf("Digite o nome do estado: \n");
    scanf( "%s", &Estado);

    printf("Digite o Codigo: \n");
    scanf("%s", &Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nome_da_Cidade);

    printf("Digite sua População: \n");
    scanf("%d", &População);

    printf("Digite sua Area: \n");
    scanf("%f", &Area_km²);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB_em_valor_reais);

    printf("Digite seus Pontos Turisticos: \n");
    scanf("%d", &Pontos_Turisticos);

    /*

     printf("%formato1, %formato2, %formato3, %formato4, %formato5, %formato6, %formato7, %formato8", variavel1, variavel2, variavel3, variavel4, variavel5, variavel6, variavel7, variavel8)

    %d Imprime um inteiro decimal.
    %f Imprime um numero de ponto flutuante no formato padrão.
    % Imprime uma cadeia (string) de caracteres.

    */

    printf("Carta: %d\n", Carta);
    printf("Nome do estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade);
    printf("Populaçao: %d\n", População);
    printf("Area: %.2f Km²\n", Area_km²);
    printf("PIB: %.2f bilhões de reais\n", PIB_em_valor_reais );
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos);


return 0;
} 
