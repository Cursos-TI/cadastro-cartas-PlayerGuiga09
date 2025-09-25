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
    float densidade_1, pibcapita_1, densidade_2, pibcapita_2;
    float super_poder_1, super_poder_2;

        printf("*******************  BEM-VINDOS AO SUPER TRUNFO DE ESTADOS!  *******************\n\n");

        printf("***********************  Cadastre a sua Primeira Carta:  ***********************\n");

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


        // Calculando A Densidade Populacional da Carta 01:
        densidade_1 = (float) populacao_1 / area_1; // Dividir a Populão pela Área do Estado

        // Calculando o PIB Per Capita do Carta 01:
        pibcapita_1 = (float) (pib_1 * 1000000000) / populacao_1; // Dividir o PIB pela Populção

        // Calculando o Super Poder da Carta 01:
        super_poder_1 = (float) populacao_1 + area_1 + pib_1 + pturisticos_1 + pibcapita_1 + (1 / densidade_1);


        printf("\n\n***********************  Cadastre a sua Segunda Carta:  ***********************\n");

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


         // Calculando A Densidade Populacional do Carta 02:
        densidade_2 = (float) populacao_2 / area_2; // Dividir a Populão pela Área do Estado

        // Calculando o PIB Per Capita do Carta 02:
        pibcapita_2 = (float) (pib_2 * 1000000000) / populacao_2; // Dividir o PIB pela Populção

        // Calculando o Super Poder da Carta 02:
        super_poder_2 = (float) populacao_2 + area_2 + pib_2 + pturisticos_2 + pibcapita_2 + (1 / densidade_2);


        // Imprimindo as Informações da Carta Nº1
        printf("\n\n*************  Carta Número 01:  *************\n");
        printf("Estado: %c \n", estado_1);
        printf("Código da Carta: %s \n", codigo_1);
        printf("Nome do Estado: %s \n", nome_1);
        printf("População: %d Habitantes \n", populacao_1);
        printf("Área: %.2f km² \n", area_1);
        printf("PIB: R$%.2f bilhões \n", pib_1);
        printf("Número de Pontos Turísticos: %d \n", pturisticos_1);
        printf("Densidade Populacional: %.2f Hab/km² \n", densidade_1);
        printf("PIB Per Capita: R$%.2f \n", pibcapita_1);
        printf("Poder Super Trunfo: %.2f \n", super_poder_1);

        // Imprimindo as Informações da Carta Nº2
        printf("\n\n*************  Carta Número 02:  *************\n");
        printf("Estado: %c \n", estado_2);
        printf("Código da Carta: %s \n", codigo_2);
        printf("Nome do Estado: %s \n", nome_2);
        printf("População: %d Habitantes \n", populacao_2);
        printf("Área: %.2f km² \n", area_2);
        printf("PIB: R$%.2f bilhões \n", pib_2);
        printf("Número de Pontos Turísticos: %d \n", pturisticos_2);
        printf("Densidade Populacional: %.2f Hab/km² \n", densidade_2);
        printf("PIB Per Capita: R$%.2f \n", pibcapita_2);
        printf("Poder Super Trunfo: %.2f \n\n", super_poder_2);

        // Comparação das Cartas
        printf("****** Comparando as Cartas: (1 = Carta 01 Venceu; 0 = Carta 02 Venceu) ******\n");

        printf("População da Carta 01: %d Hab; População da Carta 02: %d Hab. Resultado: %d \n",
              populacao_1, populacao_2, populacao_1 > populacao_2);
        printf("Área da Carta 01: %.2f Km²; Área da Carta 02: %.2f Km². Resultado: %d \n",
               area_1, area_2, area_1 > area_2);
        printf("PIB da Carta 01: R$%.2f Bilhões; PIB da Carta 02: R$%.2f Bilhões. Resultado: %d \n",
               pib_1, pib_2, pib_1 > pib_2);
        printf("Pontos Turísticos da carta 01: %d; Pontos Turísticos da Carta 02: %d. Resultado: %d \n",
               pturisticos_1, pturisticos_2, pturisticos_1 > pturisticos_2);
        printf("Densidade Populacional da Carta 01: %.2f Hab/km²; Densidade Populacional da Carta 02: %.2f Hab/km². Resultado: %d \n ",
               densidade_1, densidade_2, densidade_1 < densidade_2);
        printf("PIB Per Capita da Carta 01: R$%.2f ; PIB Per Capita da Carta 02: R$%.2f . Resultado: %d \n",
               pibcapita_1, pibcapita_2, pibcapita_1 > pibcapita_2);
        printf("Poder Super Trunfo da Carta 01: %.2f ; Poder Super Trunfo da Carta 02: %.2f . Resultado: %d \n",
               super_poder_1, super_poder_2, super_poder_1 > super_poder_2);


    return 0;
}
