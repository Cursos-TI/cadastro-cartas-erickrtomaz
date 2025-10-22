#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// População
//Área
//PIB
//Número de pontos turísticos


int main() {
  // Variaveis carta 1
  char Estado1[50];
  char Nomedacidade1[50];
  char Codigodacarta1[10];
  int Populacao1;
  float Areametro1;
  float PIB1;
  int Numerodepontosturisticos1;
  float Densidade1;
  float PIBpercapta1;

  // Variaveis carta 2

  char Estado2[50];
  char Nomedacidade2[50];
  char Codigodacarta2[10];
  int Populacao2;
  float Areametro2;
  float PIB2;
  int Numerodepontosturisticos2;
  float Densidade2;
  float PIBpercapta2;

//CADASTRO DA PRIMEIRA CARTA ENTRADAS
// Área para entrada de dados

  printf("==INSIRA OS DADOS DA CARTA 01==\n\n");

  printf("DIGITE O ESTADO:\n");
  scanf("%s", Estado1);

  printf("DIGITE O NOME DA CIDADE:\n");
  scanf("%s", Nomedacidade1);

  printf("DIGITE O CODIGO DA CARTA:\n");
  scanf("%s", Codigodacarta1);

  printf("DIGITE A POPULAÇÃO:\n");
  scanf("%d", &Populacao1);

  printf("DIGITE A ÁREA POR METRO QUADRADO:\n");
  scanf("%f", &Areametro1);

  printf("DIGITE O PIB:\n");
  scanf("%f", &PIB1);

  printf("DIGITE O NUMERO DE PONTOS TURISTICOS:\n");
  scanf("%d", &Numerodepontosturisticos1);

  Densidade1 = Populacao1 / Areametro1;

  PIBpercapta1 = PIB1 / Populacao1;


// Cadastro da segunda carta ENTRADA DE DADOS
  
  printf("==INSIRA OS DADOS DA CARTA 02==\n\n");

  printf("DIGITE O ESTADO:\n");
  scanf("%s", Estado2);

  printf("DIGITE O NOME DA CIDADE:\n");
  scanf("%s" ,Nomedacidade2);

  printf("DIGITE O CODIGO DA CARTA:\n");
  scanf("%s", Codigodacarta2);

  printf("DIGITE A POPULAÇÃO:\n");
  scanf("%d", &Populacao2);

  printf("DIGITE ÁREA POR METRO QUADRADO:\n");
  scanf("%f", &Areametro2);

  printf("DIGITE O PIB:\n");
  scanf("%f", &PIB2);

  printf("DIGITE O NUMERO DE PONTOS TURISTICOS:\n");
  scanf("%d", &Numerodepontosturisticos2);
  printf("\n");


  // DADOS DE SAIDA CARTA 01 E 02
  // Área para exibição dos dados da cidade

  printf("==DESCRIÇÃO DA CARTA 01== \n \nESTADO: %s \n NOME DA CIDADE: %s \n CODIGO: %s \n POPULAÇÃO: %d \n ÁREA POR METRO QUADRADO: % .2f \n PIB: %.2lf \n NUMERO DE PONTOS TURISTICO: %d \n",Estado1,Nomedacidade1,Codigodacarta1,Populacao1,Areametro1,PIB1,Numerodepontosturisticos1);
  printf(" Densidade Populacional: %.2f \n", (float) Densidade1);
  printf(" PIB Percapita: %.2f \n\n ", (float) PIBpercapta1);
  
  printf("==DESCRIÇÃO DA CARTA 02== \n \n ESTADO: %s \n NOME DA CIDADE: %s \n CODIGO: %s \n POPULAÇÃO: %d \n ÁREA POR METRO QUADRADO: % .2f \n PIB: % 2.f \n NUMERO DE PONTOS TURISTICOS: %d \n\n",Estado2,Nomedacidade2,Codigodacarta2,Populacao2,Areametro2,PIB2,Numerodepontosturisticos2);

  

  

return 0;
} 
