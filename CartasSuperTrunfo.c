#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// População
//Área
//PIB
//Número de pontos turísticos


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado1[50];
  char Codigodacarta1[50];
  char Nomedacidade1[50];
  int Populacao1;
  float Areametro1;
  float PIB1;
  int Numerodepontosturisticos1;

  char Estado2[50];
  char Codigodacarta2[50];
  char Nomedacidade2[50];
  int Populacao2;
  float Areametro2;
  float PIB2;
  int Numerodepontosturisticos2;

//CADASTRO DA PRIMEIRA CARTA 
// Área para entrada de dados

  printf("INSIRA OS DADOS DA CARTA 01: \n ");

  printf("DIGITE O ESTADO: \n ");
  scanf("%s", Estado1);

  printf("DIGITE O NOME DA CIDADE: \n ");
  scanf("%s", Nomedacidade1);

  printf("DIGITE O CODIGO DA CARTA: \n");
  scanf("%s", Codigodacarta1);

  printf("DIGITE A POPULAÇÃO \n ");
  scanf("%d", &Populacao1);

  printf("DIGITE A ÁREA POR METRO QUADRADO \n ");
  scanf("%f", &Areametro1);

  printf("DIGITE O PIB \n ");
  scanf("%f", &PIB1);

  printf("DIGITE O NUMERO DE PONTOS TURISTICOS \n ");
  scanf("%d", &Numerodepontosturisticos1);

  printf("DESCRIÇÃO DA CARTA 01 \n, \n, ESTADO: %s \n, CODIGO: %s \n, NOME DA CIDADE: %s \n, POPULAÇÃO: %d \n, ÁREA POR METRO QUADRADO: %f \n, PIB: %f \n, NUMERO DE PONTOS TURISTICO: %d \n" ,Estado,Nomedacidade,Codigodacarta,Populacao,Areametro,PIB,Numerodepontosturisticos);


  // Cadastro da segunda carta
  // Área para entrada de dados

printf("INSIRA OS DADOS DA CARTA 02: \n ");

  

  // Área para exibição dos dados da cidade

return 0;
} 
