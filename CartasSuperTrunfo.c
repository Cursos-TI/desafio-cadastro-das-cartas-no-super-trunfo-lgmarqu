#include<stdio.h>

int main(){

//Carta 1:

    char estado_a;
    char codigo[4];
    char nome_cidade[30];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;

// Carta 2:
    char estado_b;
    char codigo_2[4];
    char nome_cidade_2[30];
    int populacao_2;
    float area_2;
    float PIB_2;
    int pontos_turisticos_2;

  
printf("*****Seja bem vindo ao jogo de cartas super trunfo*****\n\n");

printf("Digite a letra inicial do estado: ");
    scanf(" %c", &estado_a);

printf("Digite o codigo da carta: ");
   scanf("%s", &codigo);

printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);

printf("Digite a população: ");
    scanf("%d", &populacao);

printf("Digite a área: ");
    scanf("%f", &area);

printf("Digite o PIB: ");
   scanf("%f", &PIB);

printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

printf("\n\n");

printf("Estado: %c\n", estado_a);
printf("Código da carta: %s\n", codigo);
printf("Nome da cidade:%s\n", nome_cidade);
printf("População:%d\n", populacao);
printf("Área:%f\n", area);
printf("PIB:%f\n", PIB);
printf("Pontos turísticos:%d\n\n", pontos_turisticos);


//Carta 2

printf("Agora digite os dados da próxima carta\n\n");

printf("Digite a letra inicial do estado: ");
    scanf(" %c", &estado_b);

printf("Digite o codigo da carta: ");
   scanf("%s", &codigo_2);

printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade_2);

printf("Digite a população: ");
    scanf("%d", &populacao_2);

printf("Digite a área: ");
    scanf("%f", &area_2);

printf("Digite o PIB: ");
   scanf("%f", &PIB_2);

printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos_2);


printf("\n\n");

printf("Estado: %c\n", estado_b);
printf("Código da carta: %s\n", codigo_2);
printf("Nome da cidade:%s\n", nome_cidade_2);
printf("População:%d\n", populacao_2);
printf("Área:%f\n", area_2);
printf("PIB:%f\n", PIB_2);
printf("Pontos turísticos:%d\n", pontos_turisticos_2);



return 0;
}