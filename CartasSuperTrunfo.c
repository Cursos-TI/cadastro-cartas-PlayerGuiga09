#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese"); // Deixar o Programa com a Linguagem em PTBR, por isso utilize ',' no lugar do '.'

    // Catalogando as Variáveis da Primeira Carta
    char estado_1, nome_1[50], codigo_1[5];
    char estado_2, nome_2[50], codigo_2[5];
    int populacao_1, pturisticos_1, populacao_2, pturisticos_2;
    float area_1, pib_1, area_2, pib_2;

        printf("*************  BEM-VINDOS AO SUPER TRUNFO DE ESTADOS!  *************\n\n");
        
        printf("*****************  Cadastre a sua Primeira Carta:  *****************\n");
        
        printf("Insira uma Letra de 'A' a 'H' para representar seu ESTADO: ");
        scanf(" %c", &estado_1); // Armazenar a letra escolhida pelo usuário na Variável "estado_1"

        printf("Insira o Código da Carta (Letra do Estado + um número entre 01 e 04): ");
        scanf("%s", &codigo_1); // Armazenar o Código escolhido pelo usuário na variável "codigo_1"

        printf("Insira o Nome do Estado: ");
        scanf("%s", &nome_1); // Armazenar o nome do Estado 01 na Variável "nome_1";

        printf("Insira a quantidade de Habitantes: ");
        scanf("%d", &populacao_1); // Armazenar a Quantidade de Pessoas na Variável "populacao_1"

        printf("Insira a Área do Estado (em Km²): ");
        scanf("%f", &area_1); // Armazenando a Área do Estado 01 na Variável "area_1"

        printf("Insira o valor do PIB (em Bilhões): ");
        scanf("%f", &pib_1); // Armazenando o PIB do Estado 01 na Variável "pib_1"

        printf("Insira a Quantidade de Pontos Turísticos do Estado: ");
        scanf("%d", &pturisticos_1); // Armazenando a Quantidade de Pontos Turísticos na Variável "pturisticos_1"

        printf("\n\n*****************  Cadastre a sua Segunda Carta:  *****************\n");
        
        printf("Insira uma Letra de 'A' a 'H' para representar seu ESTADO: ");
        scanf(" %c", &estado_2); // Armazenar a letra escolhida pelo usuário na Variável "estado_2"

        printf("Insira o Código da Carta (Letra do Estado + um número entre 01 e 04): ");
        scanf("%s", &codigo_2); // Armazenar o Código escolhido pelo usuário na variável "codigo_2"

        printf("Insira o Nome do Estado: ");
        scanf("%s", &nome_2); // Armazenar o nome do Estado 02 na Variável "nome_2";

        printf("Insira a quantidade de Habitantes: ");
        scanf("%d", &populacao_2); // Armazenar a Quantidade de Pessoas na Variável "populacao_2"

        printf("Insira a Área do Estado (em Km²): ");
        scanf("%f", &area_2); // Armazenando a Área do Estado 02 na Variável "area_2"

        printf("Insira o valor do PIB (em Bilhões): ");
        scanf("%f", &pib_2); // Armazenando o PIB do Estado 02 na Variável "pib_2"

        printf("Insira a Quantidade de Pontos Turísticos do Estado: ");
        scanf("%d", &pturisticos_2); // Armazenando a Quantidade de Pontos Turísticos na Variável "pturisticos_2"



        // Imprimindo as Informações da Carta Nº1
        printf("\n\n**********  Carta Número 01:  **********\n");
        printf("Estado: %c \n", estado_1);
        printf("Código da Carta: %s \n", codigo_1);
        printf("Nome do Estado: %s \n", nome_1);
        printf("População: %d Habitantes \n", populacao_1);
        printf("Área: %.2f \n", area_1);
        printf("PIB: R$%.2f bilhões \n", pib_1);
        printf("Número de Pontos Turísticos: %d \n", pturisticos_1);

        // Imprimindo as Informações da Carta Nº2
        printf("\n\n**********  Carta Número 02:  **********\n");
        printf("Estado: %c \n", estado_2);
        printf("Código da Carta: %s \n", codigo_2);
        printf("Nome do Estado: %s \n", nome_2);
        printf("População: %d Habitantes \n", populacao_2);
        printf("Área: %.2f \n", area_2);
        printf("PIB: R$%.2f bilhões \n", pib_2);
        printf("Número de Pontos Turísticos: %d \n", pturisticos_2);

    return 0;
}
