#include <stdio.h>

int main() {  
   // variáveis
   char estado [10], estado2 [10];
   char codigo [10], codigo2 [10];
   char cidade [50], cidade2 [50];
   float area, pib, area2, pib2;
   float densidade, per_capita, densidade2, per_capita2, superpoder, superpoder2;
   int pontos_turisticos, pontos_turisticos2, populacao, populacao2;
  
   // funcões de entrada das informações da Carta 1
    printf("Carta 1:\n\n");

    printf("Estado: ");
    scanf("%s", estado);

    printf("Código da Carta: ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numeros de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("\n");

    // funcões de das informações da Carta 2

    printf("Carta 2:\n\n");

    printf("Estado: ");
    scanf("%s", estado2);
       
    printf("Código da Carta: ");
    scanf("%s", codigo2);
       
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
       
    printf("População: ");
    scanf("%d", &populacao2);
       
    printf("Área: ");
    scanf("%f", &area2);
       
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Numeros de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    system ("clear");

   //operacões para o calculo da densidade e PIB per Capita carta 1
    densidade = (float)populacao / area;

    per_capita = pib / (float)populacao;

   //operação de calculo do super poder

   superpoder = (float)populacao + area + pib + (float)pontos_turisticos + per_capita + (densidade / 1);

   // funçôes de saida das informações da Carta 1
    printf("** Carta 1 **\n\n");
    printf("-Estado: %s\n", estado);
    printf("-Código da Carta: %s\n", codigo);
    printf("-Nome da Cidade: %s\n", cidade);
    printf("-População: %d\n", populacao);
    printf("-Área: %.2f km²\n", area);
    printf("-PIB: %.2f bilhões de reais\n", pib);
    printf("-Numero de pontos turísticos: %d\n", pontos_turisticos);
    printf("-Densidade Populacional: %.2f km²\n", densidade);
    printf("-PIB per Capita: %.2f Reais\n", per_capita);
    printf("-Super Poder: %f\n", superpoder);

    printf("\n\n");

    //operacões para o calculo da densidade e PIB per Capita carta 2
    densidade2 = populacao2 /  area2;
   
    per_capita2 = pib2 / (float)populacao2;

    //operação de calculo do super poder
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + per_capita2 + (densidade2 / 1);
   
    // funçôes de saida das informações da Carta 2

    printf("** Carta 2 **\n\n");
    printf("-Estado: %s\n", estado2);
    printf("-Código da Carta: %s\n", codigo2);
    printf("-Nome da Cidade: %s\n", cidade2);
    printf("-População: %d\n", populacao2);
    printf("-Área: %.2f km²\n", area2);
    printf("-PIB: %.2f bilhões de reais\n", pib2);
    printf("-Numero de pontos turísticos: %d\n", pontos_turisticos2);
    printf("-Densidade Populacional: %.2f km²\n",densidade2);
    printf("-PIB per Capita: %.2f Reais\n", per_capita2);
    printf("-Super Poder: %f\n", superpoder2);

    printf("\n\n");

    //função de comparação entre as cartas

    printf("** Comparação de Carta **\n");

    printf("Carta 1: %s, %s\n", cidade, estado);
    printf("Carta 2: %s, %s\n", cidade2, estado2);

    printf("\n");

    if(populacao > populacao2){
        printf("-População: Carta 1 Venceu\n");
    }else{
        printf("-População: Carta 2 Venceu\n");
    }

    if (area > area2){
        printf("-Área: Carta 1 Venceu\n");
    }else{
        printf("-Área: Carta 2 Venceu\n");
    }

    if(pib > pib2){
        printf("-PIB: Carta 1 Venceu\n");
    }else{
        printf("-PIB: Carta 2 Venceu\n");
    }

    if(pontos_turisticos > pontos_turisticos2){
        printf("-Numero de pontos turísticos: Carta 1 Venceu\n");
    }else{
        printf("-Numero de pontos turísticos: Carta 2 Venceu\n");
    }

    if(densidade < densidade2){
        printf("-Densidade Populacional: Carta 1 Venceu\n");
    }else{
        printf("-Densidade Populacional: Carta 2 Venceu\n");
    }

    if(per_capita > per_capita2){
        printf("-PIB per Capita: Carta 1 Venceu\n");
    }else{
        printf("-PIB per Capita: Carta 2 Venceu\n");
    }

    if(superpoder > superpoder2){
        printf("-Super Poder: Carta 1 Venceu\n");
    }else{
        printf("-Super Poder: Carta 2 Venceu\n");
    }

    return 0;  
}
