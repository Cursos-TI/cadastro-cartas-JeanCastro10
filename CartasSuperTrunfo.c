#include <stdio.h>
 
int main(){

  //------Declaração de Variaveis

char estado1, estado2;
char codigo1[40], codigo2[40];        //STRING
char cidade1 [40], cidade2 [40];       //STRING
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;
float densidade1, densidade2;
float pib_per_capita1, pib_per_capita2;

                //LEITURA CARTA 1

printf("======CARTA 1======\n");

printf("ESTADO: ");
scanf(" %c", &estado1);

printf("CODIGO: ");
scanf("%s", codigo1);

printf("CIDADE: ");
scanf("%s", cidade1);

printf("POPULAÇÃO: ");
scanf("%d", &populacao1);

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
scanf("%d", &populacao2);

printf("ÁREA EM KM2: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("PONTOS TURISTICOS: ");
scanf("%d", &pontos2);

densidade1 = populacao1 / area1;
densidade2 = populacao2 / area2;
pib_per_capita1 = pib1 / populacao1;
pib_per_capita2 = pib2 / populacao2;

                //Impressão de Cartas

printf("------Cartas cadastradas------\n");
printf("======CARTA 1======\n");

printf("Estado %c\n", estado1);
printf("CODIGO DA CARTA: %s\n", codigo1);
printf("CIDADE: %s\n", cidade1);
printf("POPULAÇÃO: %d\n", populacao1);
printf("AREA EM KM2: %.2f \n", area1);
printf("PIB: %.2f \n", pib1);
printf("PONTOS TURÍSTICOS: %d\n", pontos1);
printf("DENSIDADE: %.2f \n", densidade1);
printf("PIB PER CAPITA: %.2f \n", pib_per_capita1);

printf("======CARTA 2======\n");

printf("Estado %c\n", estado2);
printf("CODIGO DA CARTA: %s\n", codigo2);
printf("CIDADE: %s\n", cidade2);
printf("POPULACAO: %d\n", populacao2);
printf("AREA EM KM2: %.2f \n", area2);
printf("PIB: %.2f \n", pib2);
printf("PONTOS TURISTICOS: %d\n", pontos2);
printf("DENSIDADE: %.2f \n", densidade2);
printf("PIB PER CAPITA: %.2f \n", pib_per_capita2);

    return 0;
}
     
