#include <stdio.h>
 
int main(){

//Declaração de variaveis da primeira carta

   char estado1;
   char codigo1[4];
   char cidade1[50];
   int populacao1;
   float area1;
   float pib1;
   int pontos_turisticos1;

 //Declaração de variaveis da segunda carta

   char estado2;
   char codigo2[4];
   char cidade2[50];
   int populacao2;
   float area2;
   float pib2;
   int pontos_turisticos2;

 //Exibição instruções do jogo
   printf("**** SUPER TRUNFO - CADASTRO DE CARTAS*****\n\n");
   printf("Digite abaixo as informações para cadastrar suas cartas.\n\n");

 //Coleta de dados da primeira carta

   printf("----CARTA 1----\n\n"); // Exibição da indicação de cadastro da primeira carta

   printf("Digite o estado ( A - H): \n"); // Exibe na tela passo a ser seguido
   scanf(" %c", &estado1);                 // coleta dado do passo seguido a partir de digitação do usuario

   printf("Digite o codigo (01 a 04): \n");
   scanf("%s", codigo1);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &cidade1);

   printf("Digite a população: \n");
   scanf("%d", &populacao1);

   printf("Digite a area da cidade: \n");
   scanf("%f", & area1);

   printf("Digite o PIB: \n");
   scanf("%f", &pib1);

   printf("Digite o nomero de pontos turisticos: \n");
   scanf("%d", &pontos_turisticos1);


  //Coleta de dados da segunda carta

   printf("----CARTA 2----\n\n"); // Exibição da indicação de cadastro da segunda carta

   printf("Digite o estado ( A - H): \n");
   scanf(" %c", &estado2);

   printf("Digite o codigo (01 a 04): \n");
   scanf("%s", codigo2);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &cidade2);

   printf("Digite a população: \n");
   scanf("%d", &populacao2);

   printf("Digite a area da cidade: \n");
   scanf("%f", & area2);

   printf("Digite o PIB: \n");
   scanf("%f", &pib2);

   printf("Digite o nomero de pontos turisticos: \n");
   scanf("%d", &pontos_turisticos2);

 //exibição dos dados das cartas cadastradas

   printf("<><><>CARTAS CADASTRADAS<><><>\n\n");

 // Exibição da primeira carta

   printf("---- Carta 1 ----H \n\n"); // Titulo primeira carta
   printf("Estado: %c \n", estado1);
   printf("Codigo: %s\n", codigo1);
   printf("Nome da cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Area: %.2f\n", area1);
   printf("PIB: %.2f\n", pib1);
   printf("Numero de pontos turisticos: %d\n\n", pontos_turisticos1);

   
 // Exibição da segunda carta

   printf("---- Carta 2 ---- \n\n"); // Titulo segunda carta
   printf("Estado: %c \n", estado2);
   printf("Codigo: %s\n", codigo2);
   printf("Nome da cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Area: %.2f\n", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);


   return 0;

}