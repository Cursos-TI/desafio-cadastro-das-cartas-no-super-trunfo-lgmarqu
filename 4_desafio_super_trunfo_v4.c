#include<stdio.h>

int main(){

// Variaveis das duas cartas

    char estado_a, estado_b, codigo[4], codigo_2[4], nome_cidade[30], nome_cidade_2[30];
    int pontos_turisticos, pontos_turisticos_2; unsigned long int populacao, populacao_2;
    float area, area_2, PIB, PIB_2, densidade_populacional, densidade_populacional_2; 
    float pib_per_capita, pib_per_capita_2, superPoder1, superPoder2;
       
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

if (populacao > populacao_2){
    printf("Carta 1 - São Paulo(SP): %ld\nCARTA 2 - Rio de Janeiro(RJ): %ld\nResultado: Carta 1 (São Paulo) venceu\n\n", populacao, populacao_2);
}else {
    printf("Carta 2 - Rio de Janeiro(RJ) : %ld\nCARTA 1 - Rio de Janeiro(RJ): %ld\nResultado: Carta 2 (Rio de JaneiroRJ) venceu\n\n", populacao_2, populacao);
}
if (area > area_2){
    printf("Carta 1 - São Paulo(SP): %f\nCARTA 2 - Rio de Janeiro(RJ): %f\nResultado: Carta 1 (São Paulo) venceu\n\n", area, area_2);
}else {
    printf("Carta 2 - Rio de Janeiro(RJ): %f/nCARTA 1 - São Paulo(SP): %f\nResultado: Carta 2 (Rio de Janeiro) venceu\n\n", area_2, area);
}
if (PIB > PIB_2){
    printf("Carta 1 - São Paulo(SP): %.2f\nCarta 2 - Rio de Janeiro(RJ): %.2f\nResultado: Carta 1 (São Paulo() venceu\n\n", PIB, PIB_2);
}else {
    printf("Carta 2 - Rio de Janeiro(RJ): %.2f\nCarta 1 - São Paulo(SP): %.2f\nResultado: Carta 2 (Rio de Janeiro) venceu\n\n", PIB_2, PIB);
}
if (pontos_turisticos > pontos_turisticos_2){
    printf("Carta 1 - São Paulo(SP): %d\nCarta 2 - Rio de Janeiro(RJ): %d\nResultado: Carta 1 (São Paulo) venceu\n\n", pontos_turisticos, pontos_turisticos_2);
}else {
    printf("Carta 2 - Rio de Janeiro(RJ): %d\nCarta 1 - São Paulo(SP): %d\nResultado: Carta 2 (Rio de Janeiro) venceu\n\n", pontos_turisticos_2, pontos_turisticos);
}
if(densidade_populacional > densidade_populacional_2){
    printf("Carta 2 - Rio de Janeiro(RJ): %.2f\nCarta 1 - São Paulo(SP): %.2f\nResultado: Carta 2 (Rio de Janeiro) venceu\n\n", densidade_populacional_2, densidade_populacional);
}else {
    printf("Carta 1 - São Paulo(SP): %.2f\nCarta 2 - Rio de Janeiro(RJ): %.2f\nResultado: Carta 1 (São Paulo) venceu\n\n", densidade_populacional, densidade_populacional_2);
}
if (pib_per_capita > pib_per_capita_2){
    printf("Carta 1 - São Paulo(SP): %.2f\nCarta 2 - Rio de Janeiro(RJ): %.2f\nResultado: Carta 1 (São Paulo) venceu\n\n", pib_per_capita, pib_per_capita_2);
}else {
    printf("Carta 2 - Rio de Janeiro(RJ): %.2f\nCarta 1 - São Paulo(SP): %d\nResultado: Carta 2 (Rio de Janeiro) venceu\n\n", pib_per_capita_2, pib_per_capita);
}
if (superPoder1 > superPoder2){
    printf("Carta 1 - São Paulo(SP): %.2f\nCarta 2 - Rio de Janeiro(RJ): %2.f\nResultado: Carta 1 (São Paulo) venceu\n\n", superPoder1, superPoder2);
}else{   
    printf("Carta 2 - Rio de Janeiro : %.2f\nCarta 1 - São Paulo(SP): %.2f\nResultado: Carta 2 (Rio de Janeiro)) venceu\n\n", superPoder2, superPoder1);
}


return 0;

}