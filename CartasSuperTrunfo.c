#include <stdio.h> 
int main(){

  //------Declaração de Variaveis

char estado1, estado2;
char codigo1[40], codigo2[40], cidade1[40], cidade2[40];  //STRINGS
unsigned long int populacao1, populacao2;
float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;
float super_poder1, super_poder2, inverso_densidade1, inverso_densidade2;
int pontos1, pontos2;
  
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

        //COMPARAÇÃO DE CARTAS

printf("------RESULTADO DA BATALHA------\n");

if (populacao1 > populacao2){
  printf("POPULAÇÃO: Carta 1 venceu\n");
}else {
  printf("POPULAÇÃO: Carta 2 venceu\n");
}
if (area1 > area2){
  printf("ÁREA: Carta 1 venceu\n");}
else {
  printf("ÁREA: Carta 2 venceu\n");}
if (pib1 > pib2){
  printf("PIB: Carta 1 venceu\n");}
else {
  printf("PIB: Carta 2 venceu\n");}
if (pontos1 > pontos2){
  printf("PONTOS TURÍSTICOS: Carta 1 venceu\n"); }
else {
  printf("PONTOS TURÍSTICOS: Carta 2 venceu\n");}
if (densidade1 < densidade2){
  printf("DENSIDADE POPULACIONAL: Carta 1 venceu\n");}
else {
  printf("DENSIDADE POPULACIONAL: Carta 2 venceu\n");}  
if (pib_per_capita1 > pib_per_capita2){
  printf("PIB PER CAPITA: Carta 1 venceu\n");}
else {
  printf("PIB PER CAPITA: Carta 2 venceu\n");}  
if (super_poder1 > super_poder2){
  printf("SUPER PODER: Carta 1 venceu\n");
}else {
  printf("SUPER PODER: Carta 2 venceu\n");
} 




return 0;
}
     
