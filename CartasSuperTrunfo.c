#include <stdio.h> // Biblioteca padrão para entrada e saída (printf, scanf)
 
 
int main(){   //Função principal 

//Declaração de variaveis da primeira carta

   char estado1;                 // Armazena uma única letra (A-H) para o estado da primeira carta
   char codigo1[4];              // Array de caracteres para código da carta (ex: "A01") + 0
   char cidade1[50];             // Array para nome da cidade - até 49 caracteres + 0
   int populacao1;               // Número inteiro para população da cidade
   float area1;                  // Número decimal para área da cidade em km
   float pib1;                   // Número decimal para PIB em bilhões de reais
   int pontos_turisticos1;       // Número inteiro para quantidade de pontos turísticos
   float densidade1;             // Variável calculada: densidade populacional (hab/km²)
   float pibpercapita1;          // Variável calculada: PIB per capita em reais

 //Declaração de variaveis da segunda carta

   char estado2;
   char codigo2[4];
   char cidade2[50];
   int populacao2;
   float area2;
   float pib2;
   int pontos_turisticos2;
   float densidade2;
   float pibpercapita2;

   // Exibição das instruções do jogo para o usuário
   printf("**** SUPER TRUNFO - CADASTRO DE CARTAS*****\n\n");
   printf("Digite abaixo as informações para cadastrar suas cartas.\n\n");

   //Coleta de dados da primeira carta

   printf("----CARTA 1----\n\n"); // Exibição da indicação de cadastro da primeira carta

   printf("Digite o estado ( A - H): \n");    // Solicita ao usuario
   scanf(" %c", &estado1);                    // %c lê um caractere

   printf("Digite o codigo (01 a 04): \n");
   scanf("%s", codigo1);                      // %s lê string, codigo1 já é um ponteiro (nome do array)

   printf("Digite o nome da cidade: \n");
   scanf("%s", &cidade1);                     // Lê string para o array cidade1

   printf("Digite a população: \n");
   scanf("%d", &populacao1);                  // %d lê inteiro, & indica variável população
   
   printf("Digite a area da cidade: \n");
   scanf("%f", & area1);                      // %f lê número decimal (float) area
                        
   printf("Digite o PIB: \n");
   scanf("%f", &pib1);                        // %f lê número decimal (float) area PIB

   printf("Digite o nomero de pontos turisticos: \n");
   scanf("%d", &pontos_turisticos1);         // %d lê inteiro, & indica variável ponstos turisticos


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

 
   densidade1 = (float) populacao1 / area1;  // Converte populacao1 para float e calcula densidade
   pibpercapita1 = (float) (pib1 * 1000000000) / populacao1;   // Converte PIB de bilhões para unidade e divide pela população

 // Exibição da primeira carta

   printf("---- Carta 1 ---- \n\n"); // Titulo primeira carta
   printf("Estado: %c \n", estado1);              // %c exibe um caractere                      
   printf("Codigo: %s\n", codigo1);               // %s exibe string
   printf("Nome da cidade: %s\n", cidade1);       // %s exibe nome da cidade
   printf("População: %d\n", populacao1);         // %d exibe número inteiro
   printf("Area: %.2f Km²\n", area1);             // %.2f exibe float com 2 casas decimais
   printf("PIB: %.2f bilhões de reais\n", pib1);  // PIB formatado com 2 casas decimais
   printf("Numero de pontos turisticos: %d\n", pontos_turisticos1); // Número de pontos turísticos
   printf("Densidade Populacional: %.2f Hab/km²\n",densidade1);     // Densidade com 2 casas decimais
   printf ("PIB per capita: %.2f reais\n\n", pibpercapita1);        // PIB per capita com 2 casas decimais


     densidade2 = (float) populacao2 / area2; 
     pibpercapita2 = (float) (pib2 * 1000000000) / populacao2;

     // Exibição da segunda carta

   printf("---- Carta 2 ---- \n\n"); // Titulo segunda carta
   printf("Estado: %c \n", estado2);
   printf("Codigo: %s\n", codigo2);
   printf("Nome da cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Area: %.2f Km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
   printf("Densidade Populacional: %.2f Hab/km²\n", densidade2);
   printf ("PIB per capita: %.2f reais\n", pibpercapita2);



   return 0;   //Retorna 0 para indicar que o programa executou com sucesso

}