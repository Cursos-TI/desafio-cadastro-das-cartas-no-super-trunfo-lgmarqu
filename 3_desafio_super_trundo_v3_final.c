#include<stdio.h>

int main(){

// Variaveis das duas cartas

    char estado_a, estado_b;
    char codigo[4], codigo_2[4];
    char nome_cidade[30], nome_cidade_2[30];
    int pontos_turisticos, pontos_turisticos_2;
    unsigned long int populacao, populacao_2;
    float area, area_2; 
    float PIB, PIB_2; 
    float densidade_populacional, densidade_populacional_2; 
    float pib_per_capita, pib_per_capita_2; 
    float superPoder1, superPoder2;
    
    
    
    printf("**Seja bem vindo ao jogo de cartas super trunfo**\n\n");

// carta 1 

printf("Digite uma letra de 'A' a 'H': ");
  scanf(" %c", &estado_a);

printf("Digite um código(ex: A01, B03): ");
   scanf("%s", &codigo);

printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);

printf("Digite a população: ");
    scanf("%ld", &populacao);

printf("Digite a área: ");
    scanf("%f", &area);

printf("Digite o PIB: ");
   scanf("%f", &PIB);

printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

densidade_populacional = populacao / area;
pib_per_capita = (PIB / populacao) * 10000000000;

printf("\n\n");

//Carta 2

printf("Agora digite os dados da próxima carta\n\n");

printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado_b);

printf("Digite um código(ex: A01, B03): ");
   scanf("%s", &codigo_2);

printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade_2);

printf("Digite a população: ");
    scanf("%ld", &populacao_2);

printf("Digite a área: ");
    scanf("%f", &area_2);

printf("Digite o PIB: ");
   scanf("%f", &PIB_2);

printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos_2);


densidade_populacional_2 = populacao_2 / area_2;
pib_per_capita_2 =  (PIB_2 / populacao_2) * 10000000000;

printf("\n\n");

//IMPRIMIR DADOS NA TELA DAS CARTAS 1

printf("Estado: %c\n", estado_a);
printf("Código: %s\n", codigo);
printf("Nome da cidade: %s\n", nome_cidade);
printf("População: %ld\n", populacao);
printf("Área: %.2f\n", area);
printf("PIB: %.2f\n", PIB);
printf("Pontos turísticos: %d\n", pontos_turisticos);
printf("Densidade Populacional: %.2f\n", densidade_populacional);
printf("PIB per Capita: %.2f\n\n", pib_per_capita);

//IMPRIMIR DADOS NA TELA DAS CARTAS 2

printf("Estado: %c\n", estado_b);
printf("Código: %s\n", codigo_2);
printf("Nome da cidade: %s\n", nome_cidade_2);
printf("População: %ld\n", populacao_2);
printf("Área: %.2f\n", area_2);
printf("PIB: %.2f\n", PIB_2);
printf("Pontos turísticos: %d\n", pontos_turisticos_2);
printf("Densidade Populacional: %.2f\n", densidade_populacional_2);
printf("PIB per Capita: %.2f\n\n", pib_per_capita_2);


superPoder1 = (float)populacao + area + PIB + pib_per_capita + (1 / densidade_populacional) + (float)pontos_turisticos;
superPoder2 = (float)populacao_2 + area_2 + PIB_2 + pib_per_capita_2 + (1 / densidade_populacional_2) + (float)pontos_turisticos_2;

printf("******Resultado das comparações******\n\n");

if (populacao > populacao_2)
    
    {
        printf("População: Carta 1 venceu (%d)\n", populacao > populacao_2);

    } else {

        printf("População: Carta 2 venceu (%d)\n", populacao < populacao_2);

    }

 if (area > area_2)
    
    {
        printf("Área: Carta 1 venceu (%d)\n", area > area_2);

    } else {

        printf("População: Carta 2 venceu (%d)\n", area < area_2);

    }   

if (PIB > PIB_2)
    
    {
        printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB_2);

    } else {

        printf("PIB: Carta 2 venceu (%d)\n", PIB < PIB_2);

    }

if (pontos_turisticos > pontos_turisticos_2)
    
    {
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos > pontos_turisticos_2);

    } else {

        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", pontos_turisticos< pontos_turisticos_2);

    }

if (densidade_populacional < densidade_populacional_2)
    
    {
        printf("Densidade Populacional: Carta 1 venceu (%0.f)\n", densidade_populacional < densidade_populacional_2);

    } else {

        printf("Densidade Populacional: Carta 2 venceu (%0.f)\n", densidade_populacional > densidade_populacional_2);

    }

if (pib_per_capita > pib_per_capita_2)
    
    {
        printf("PIB per Capita: Carta 1 venceu  (%d)\n", pib_per_capita > pib_per_capita_2);

    } else {

        printf("PIB per Capita: Carta 2 venceu  (%d)\n", pib_per_capita < pib_per_capita_2);

    }

if (superPoder1 > superPoder2)
    
    {
        printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    } else {

        printf("Super Poder: Carta 2 venceu (%d)\n", superPoder1 < superPoder2);

    }

return 0;

}