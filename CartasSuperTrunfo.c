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
   double superpoder1;

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
   double superpoder2;
  
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
   superpoder1 = (double) populacao1 + area1 +pib1 + pontos_turisticos1 + (1 / densidade1);  
   superpoder2 = (double) populacao2 + area2 +pib2 + pontos_turisticos2 + (1 / densidade2); 

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
   printf ("PIB per capita: %.2f reais\n", pibpercapita1);        // PIB per capita com 2 casas decimais
   printf("Super poder (soma dos atributos): %.2f\n\n", superpoder1);


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
   printf("Super poder (soma dos atributos): %.2f\n\n", superpoder2);


   printf("---- Hora da batalha ----\n\n");
   printf(" Nesta etapa as cartes irão duelar, seus atributos serão comparados e os maiores\n");
   printf("atributos vencem, a carta com o maior atributo somado sera a grande campeã\n\n");

  int resultadopopulcao;
  int resultadoarea;
  int resultadoPIB;
  int resultadoturisticos;
  int resultadodensidade;
  int resultadoiPIBpercapita;
  int resultadosuperpoder;

resultadopopulcao = populacao1 > populacao2;
resultadoarea = area1 > area2;
resultadoPIB = pib1 > pib2;
resultadoturisticos = pontos_turisticos1 > pontos_turisticos2;
resultadodensidade = densidade1 > densidade2;
resultadoiPIBpercapita = pibpercapita1 > pibpercapita2;
resultadosuperpoder = superpoder1 > superpoder2;

//Foram utilizado operadores ternarios (? :) abaixo para imprimir duas opçoes de string carta 1 vencer e carta 2 venceu.
//Se o resultado for 1 verdadero exibe carta 1 venceu, se for 0 falso exibe carta 2 venceu.

printf("Resultado do duelo:\n\n");
printf("População: %s (Resultado: %d)\n", resultadopopulcao ? "Carta 1 venceu" : "Carta 2 venceu", resultadopopulcao);
printf("Area: %s (Resultado: %d)\n", resultadoarea ? "Carta 1 venceu" : "Carta 2 venceu", resultadoarea);
printf("PIB: %s (Resultado: %d)\n", resultadoPIB ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPIB);
printf("Pontos turisticos: %s (Resultado: %d)\n", resultadoturisticos ? "Carta 1 venceu" : "Carta 2 venceu", resultadoturisticos);
printf("Densidade: %s (Resultado: %d)\n", resultadodensidade ? "Carta 1 venceu" : "Carta 2 venceu", resultadodensidade);
printf("PIB Per capita: %s (Resultado: %d)\n", resultadoiPIBpercapita ? "Carta 1 venceu" : "Carta 2 venceu", resultadoiPIBpercapita);
printf("Super Poder: %s (Resultado: %d)\n", resultadosuperpoder ? "Carta 1 venceu" : "Carta 2 venceu", resultadosuperpoder);



return 0;   //Retorna 0 para indicar que o programa executou com sucesso

}