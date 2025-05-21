#include<stdio.h>

int main(){

// Variaveis das duas cartas

    char estado_a, estado_b, codigo[4], codigo_2[4], nome_cidade[30], nome_cidade_2[30];
    int populacao, populacao_2, pontos_turisticos, pontos_turisticos_2;
    float area, area_2, PIB, PIB_2;
 
printf("**Seja bem vindo ao jogo de cartas super trunfo**\n\n");

// carta 1 

printf("Digite uma letra de 'A' a 'H': ");
  scanf(" %c", &estado_a);

printf("Digite um código(ex: A01, B03): ");
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

//Carta 2

printf("Agora digite os dados da próxima carta\n\n");

printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado_b);

printf("Digite um código(ex: A01, B03): ");
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

//IMPRIMIR DADOS NA TELA

printf("Estado: %c\n", estado_a);
printf("Código: %s\n", codigo);
printf("Nome da cidade: %s\n", nome_cidade);
printf("População: %d\n", populacao);
printf("Área: %.2f\n", area);
printf("PIB: %.2f\n", PIB);
printf("Pontos turísticos: %d\n", pontos_turisticos);

printf("\n");

printf("Estado: %c\n", estado_b);
printf("Código: %s\n", codigo_2);
printf("Nome da cidade: %s\n", nome_cidade_2);
printf("População: %d\n", populacao_2);
printf("Área: %.2f\n", area_2);
printf("PIB: %.2f\n", PIB_2);
printf("Pontos turísticos: %d\n", pontos_turisticos_2);

return 0;

}