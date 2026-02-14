#include <stdio.h>
#include <stdlib.h>
int main(){

  //------Declaração de Variaveis

char estado1, estado2;
char codigo1[40], codigo2[40], cidade1[40], cidade2[40];  //STRINGS
unsigned long int populacao1, populacao2;
float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;
float super_poder1, super_poder2, inverso_densidade1, inverso_densidade2;
int pontos1, pontos2, escolha;
  
                //LEITURA CARTA 1

printf("======CARTA 1======\n");

printf("ESTADO: ");
scanf(" %c", &estado1);

printf("CODIGO: ");
scanf("%s", codigo1);

printf("CIDADE: ");
scanf("%s", cidade1);

printf("POPULAÇÃO: ");
scanf("%lu", &populacao1);

printf("ÁREA EM KM2: ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("PONTOS TURISTICOS: ");
scanf("%d", &pontos1);

                //LEITURA CARTA 2

printf("------CARTA 2------\n");

printf("ESTADO: ");
scanf(" %c", &estado2);

printf("CODIGO: ");
scanf("%s", codigo2);

printf("CIDADE: ");
scanf("%s", cidade2);

printf("POPULAÇÃO: ");
scanf("%lu", &populacao2);

printf("ÁREA EM KM2: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("PONTOS TURISTICOS: ");
scanf("%d", &pontos2);

densidade1 = (float)populacao1 / area1;
densidade2 = (float)populacao2 / area2;
pib_per_capita1 = pib1 / (float)populacao1;
pib_per_capita2 = pib2 / (float)populacao2;
inverso_densidade1 = 1.0f / densidade1;
inverso_densidade2 = 1.0f / densidade2;
super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 +  pib_per_capita1 +  inverso_densidade1;
super_poder2 =(float)populacao2 + area2 + pib2 + pontos2 +  pib_per_capita2 +  inverso_densidade2;

                //Impressão de Cartas

printf("------Cartas cadastradas------\n");
printf("======CARTA 1======\n");

printf("Estado %c\n", estado1);
printf("CODIGO DA CARTA: %s\n", codigo1);
printf("CIDADE: %s\n", cidade1);
printf("POPULAÇÃO: %lu\n", populacao1);
printf("AREA EM KM2: %.2f \n", area1);
printf("PIB: %.2f \n", pib1);
printf("PONTOS TURÍSTICOS: %d\n", pontos1);
printf("DENSIDADE: %.2f \n", densidade1);
printf("PIB PER CAPITA: %.2f \n", pib_per_capita1);
printf("SUPER PODER: %.2f \n", super_poder1);

printf("======CARTA 2======\n");

printf("Estado %c\n", estado2);
printf("CODIGO DA CARTA: %s\n", codigo2);
printf("CIDADE: %s\n", cidade2);
printf("POPULACAO: %lu\n", populacao2);
printf("AREA EM KM2: %.2f \n", area2);
printf("PIB: %.2f \n", pib2);
printf("PONTOS TURISTICOS: %d\n", pontos2);
printf("DENSIDADE: %.2f \n", densidade2);
printf("PIB PER CAPITA: %.2f \n", pib_per_capita2);
printf("SUPER PODER: %.2f \n", super_poder2);

        //COMPARAÇÃO DE CARTAS (escolha pelo usuário)

printf("------RESULTADO DA BATALHA------\n");

escolha;
printf("Escolha o atributo para comparar:\n");
printf("1 - POPULAÇÃO\n");
printf("2 - ÁREA\n");
printf("3 - PIB\n");
printf("4 - PONTOS TURÍSTICOS\n");
printf("5 - DENSIDADE POPULACIONAL (menor é melhor)\n");
printf("6 - PIB PER CAPITA\n");
printf("7 - SUPER PODER\n");
printf("0 - Comparar todos os atributos (comportamento antigo)\n");
printf("Escolha: ");
scanf("%d", &escolha);

switch (escolha) {
  case 1:
    if (populacao1 > populacao2) printf("POPULAÇÃO: Carta 1 venceu\n");
    else if (populacao1 < populacao2) printf("POPULAÇÃO: Carta 2 venceu\n");
    else printf("POPULAÇÃO: Empate\n");
    break;
  case 2:
    if (area1 > area2) printf("ÁREA: Carta 1 venceu\n");
    else if (area1 < area2) printf("ÁREA: Carta 2 venceu\n");
    else printf("ÁREA: Empate\n");
    break;
  case 3:
    if (pib1 > pib2) printf("PIB: Carta 1 venceu\n");
    else if (pib1 < pib2) printf("PIB: Carta 2 venceu\n");
    else printf("PIB: Empate\n");
    break;
  case 4:
    if (pontos1 > pontos2) printf("PONTOS TURÍSTICOS: Carta 1 venceu\n");
    else if (pontos1 < pontos2) printf("PONTOS TURÍSTICOS: Carta 2 venceu\n");
    else printf("PONTOS TURÍSTICOS: Empate\n");
    break;
  case 5:
    if (densidade1 < densidade2) printf("DENSIDADE POPULACIONAL: Carta 1 venceu\n");
    else if (densidade1 > densidade2) printf("DENSIDADE POPULACIONAL: Carta 2 venceu\n");
    else printf("DENSIDADE POPULACIONAL: Empate\n");
    break;
  case 6:
    if (pib_per_capita1 > pib_per_capita2) printf("PIB PER CAPITA: Carta 1 venceu\n");
    else if (pib_per_capita1 < pib_per_capita2) printf("PIB PER CAPITA: Carta 2 venceu\n");
    else printf("PIB PER CAPITA: Empate\n");
    break;
  case 7:
    if (super_poder1 > super_poder2) printf("SUPER PODER: Carta 1 venceu\n");
    else if (super_poder1 < super_poder2) printf("SUPER PODER: Carta 2 venceu\n");
    else printf("SUPER PODER: Empate\n");
    break;
  case 0:

    //IMPRIMIR TODAS AS COMPARAÇÕES

    if (populacao1 > populacao2) 
    printf("POPULAÇÃO: Carta 1 venceu\n"); 
    else if (populacao1 < populacao2) 
    printf("POPULAÇÃO: Carta 2 venceu\n"); 
    else 
    printf("POPULAÇÃO: Empate\n");
    
    if (area1 > area2) 
    printf("ÁREA: Carta 1 venceu\n"); 
    else if (area1 < area2) 
    printf("ÁREA: Carta 2 venceu\n"); 
    else printf("ÁREA: Empate\n");
    
    if (pib1 > pib2) 
    printf("PIB: Carta 1 venceu\n"); 
    else if (pib1 < pib2) printf("PIB: Carta 2 venceu\n"); 
    else printf("PIB: Empate\n");
    
    if (pontos1 > pontos2) 
    printf("PONTOS TURÍSTICOS: Carta 1 venceu\n"); 
    else if (pontos1 < pontos2)
    printf("PONTOS TURÍSTICOS: Carta 2 venceu\n"); 
    else 
    printf("PONTOS TURÍSTICOS: Empate\n");
    
    if (densidade1 < densidade2) 
    printf("DENSIDADE POPULACIONAL: Carta 1 venceu\n"); 
    else if (densidade1 > densidade2) 
    printf("DENSIDADE POPULACIONAL: Carta 2 venceu\n"); 
    else 
    printf("DENSIDADE POPULACIONAL: Empate\n");
    
    if (pib_per_capita1 > pib_per_capita2) 
    printf("PIB PER CAPITA: Carta 1 venceu\n");
    else if (pib_per_capita1 < pib_per_capita2) 
    printf("PIB PER CAPITA: Carta 2 venceu\n"); 
    else 
    printf("PIB PER CAPITA: Empate\n");
    
    if (super_poder1 > super_poder2) 
    printf("SUPER PODER: Carta 1 venceu\n"); 
    else if (super_poder1 < super_poder2) 
    printf("SUPER PODER: Carta 2 venceu\n"); 
    else 
    printf("SUPER PODER: Empate\n");
    break;
  
    default:
    printf("Escolha inválida. Nenhuma comparação efetuada.\n");
}




return 0;
}
     
