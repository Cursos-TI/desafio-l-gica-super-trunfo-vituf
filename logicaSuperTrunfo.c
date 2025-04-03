#include <stdio.h>

int main() {  
   // variáveis
   char estado [10], estado2 [10];
   char codigo [10], codigo2 [10];
   char cidade [50], cidade2 [50];
   float area, pib, area2, pib2;
   float densidade, per_capita, densidade2, per_capita2, superpoder, superpoder2;
   int pontos_turisticos, pontos_turisticos2, populacao, populacao2;
   int escolhadojogador, escolhadojogador2;
  
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


    printf("** Comparação de Carta **\n");

    printf("Carta 1: %s, %s\n", cidade, estado);
    printf("Carta 2: %s, %s\n", cidade2, estado2);

    printf("\n");

    // printf para escolha do joagrdor

    printf("*** Escolha um atributo pra comparar***\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n");
    printf("Escolha: ");
    scanf("%d", &escolhadojogador);

    //switch para  primeira escolher do joagador

    switch (escolhadojogador)
    {
    case 1: // opção de população
        printf("Opção escolhida: População\n");
        printf("Carta 1: %d\n", populacao);
        printf("Carta 2: %d\n", populacao2);
            if (populacao == populacao2) // função if para a escolha do vencedor
            {
                printf("Empate!!\n");
            }else if (populacao > populacao2)
            {
                printf("Carta 1 venceu!!\n");
            } else 
            {
                printf("Carta 2 venceu!!\n");
            }
            
        break;
    case 2: // opção da área
        printf("Opção escolhida: Área\n");
        printf("Carta 1: %f\n", area);
        printf("Carta 2: %f\n", area2);
            if (area == area2)
            {
                printf("Empate!!\n");
            }else if (area > area2)
            {
                printf("Carta 1 venceu!!\n");
            } else 
            {
                printf("Carta 2 venceu!!\n");
            }
        break;
    case 3: // opção do PIB
        printf("Opção escolhida: PIB\n");  
        printf("Carta 1: %f\n", pib);
        printf("Carta 2: %f\n", pib2);
            if (pib == pib2)
            {
                printf("Empate!!\n");
            }else if (pib > pib2)
            {
                printf("Carta 1 venceu!!\n");
            } else 
            {
                printf("Carta 2 venceu!!\n");
            }
        break;
    case 4: // opção dos pontos turísticos
        printf("Opção escolhida: Número de pontos turísticos\n");
        printf("Carta 1: %d\n", pontos_turisticos);
        printf("Carta 2: %d\n", pontos_turisticos2);
            if (pontos_turisticos == pontos_turisticos2)
            {
                printf("Empate!!\n");
            }else if (pontos_turisticos > pontos_turisticos2)
            {
                printf("Carta 1 venceu!!\n");
            } else 
            {
                printf("Carta 2 venceu!!\n");
            }
        break;
    case 5: // opção da densidade demografica
        printf("Opção escolhida: Densidade Populacional\n");
        printf("Carta 1: %f\n", densidade);
        printf("Carta 2: %f\n", densidade2);
            if (densidade == densidade2)
            {
                printf("Empate!!\n");
            }else if (densidade < densidade2)
            {
                printf("Carta 1 venceu!!\n");
            } else 
            {
                printf("Carta 2 venceu!!\n");
            }
        break;
    case 6:  // opção do PIB per Capita
        printf("Opção escolhida: PIB per Capita\n");
        printf("Carta 1: %f\n", per_capita);
        printf("Carta 2: %f\n", per_capita2);
            if (per_capita == per_capita2)
            {
                printf("Empate!!\n");
            }else if (per_capita > per_capita2)
            {
                printf("Carta 1 venceu!!\n");
            } else 
            {
                printf("Carta 2 venceu!!\n");
            }
        break;
    case 7: // opção do super poder
        printf("Opção escolhida: Super Poder\n");
        printf("Carta 1: %f\n", superpoder);
        printf("Carta 2: %f\n", superpoder2);
            if (superpoder == superpoder2)
            {
                printf("Empate!!\n");
            }else if (superpoder > superpoder2)
            {
                printf("Carta 1 venceu!!\n");
            } else 
            {
                printf("Carta 2 venceu!!\n");
            }
    break;
    default:
        printf("Escolha invalida."); //opção caso o jogador não escolha nada
        break;
    }

    printf("*** Escolha mais um atributo pra comparar***\n");// printf para segunda escolha do joagrdor
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n");
    printf("Escolha: ");
    scanf("%d", &escolhadojogador2);

    if (escolhadojogador = escolhadojogador2)// if para saber se o jogador escolheu o memso atributo do primeiro
    {
        printf("Ops..Você já escolheu esse atributo!!");
    }else if (escolhadojogador != escolhadojogador2) //else if para caso o jogador escolha o segundo atributo diferente do primeiro
    {
     switch (escolhadojogador2)
        {
        case 1: // opção de população
            printf("Opção escolhida: População\n");
            printf("Carta 1: %d\n", populacao);
            printf("Carta 2: %d\n", populacao2);
                if (populacao == populacao2) // função if para a escolha do vencedor
                {
                    printf("Empate!!\n");
                }else if (populacao > populacao2)
                {
                    printf("Carta 1 venceu!!\n");
                } else 
                {
                    printf("Carta 2 venceu!!\n");
                }
                
            break;
        case 2: // opção da área
            printf("Opção escolhida: Área\n");
            printf("Carta 1: %f\n", area);
            printf("Carta 2: %f\n", area2);
                if (area == area2)
                {
                    printf("Empate!!\n");
                }else if (area > area2)
                {
                    printf("Carta 1 venceu!!\n");
                } else 
                {
                    printf("Carta 2 venceu!!\n");
                }
            break;
        case 3: // opção do PIB
            printf("Opção escolhida: PIB\n");  
            printf("Carta 1: %f\n", pib);
            printf("Carta 2: %f\n", pib2);
                if (pib == pib2)
                {
                    printf("Empate!!\n");
                }else if (pib > pib2)
                {
                    printf("Carta 1 venceu!!\n");
                } else 
                {
                    printf("Carta 2 venceu!!\n");
                }
            break;
        case 4: // opção dos pontos turísticos
            printf("Opção escolhida: Número de pontos turísticos\n");
            printf("Carta 1: %d\n", pontos_turisticos);
            printf("Carta 2: %d\n", pontos_turisticos2);
                if (pontos_turisticos == pontos_turisticos2)
                {
                    printf("Empate!!\n");
                }else if (pontos_turisticos > pontos_turisticos2)
                {
                    printf("Carta 1 venceu!!\n");
                } else 
                {
                    printf("Carta 2 venceu!!\n");
                }
            break;
        case 5: // opção da densidade demografica
            printf("Opção escolhida: Densidade Populacional\n");
            printf("Carta 1: %f\n", densidade);
            printf("Carta 2: %f\n", densidade2);
                if (densidade == densidade2)
                {
                    printf("Empate!!\n");
                }else if (densidade < densidade2)
                {
                    printf("Carta 1 venceu!!\n");
                } else 
                {
                    printf("Carta 2 venceu!!\n");
                }
            break;
        case 6:  // opção do PIB per Capita
            printf("Opção escolhida: PIB per Capita\n");
            printf("Carta 1: %f\n", per_capita);
            printf("Carta 2: %f\n", per_capita2);
                if (per_capita == per_capita2)
                {
                    printf("Empate!!\n");
                }else if (per_capita > per_capita2)
                {
                    printf("Carta 1 venceu!!\n");
                } else 
                {
                    printf("Carta 2 venceu!!\n");
                }
            break;
        case 7: // opção do super poder
            printf("Opção escolhida: Super Poder\n");
            printf("Carta 1: %f\n", superpoder);
            printf("Carta 2: %f\n", superpoder2);
                if (superpoder == superpoder2)
                {
                    printf("Empate!!\n");
                }else if (superpoder > superpoder2)
                {
                    printf("Carta 1 venceu!!\n");
                } else 
                {
                    printf("Carta 2 venceu!!\n");
                }
            break;
        default:
            printf("Escolha invalida."); //opção caso o jogador não escolha nada
            break;


    }
    
    
    

    return 0;  
}
