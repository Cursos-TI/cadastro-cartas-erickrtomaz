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
  char Estado[50];
  char Codigodacarta[50];
  char Nomedacidade[50];
  int Populacao;
  float Areametro;
  float PIB;
  int Numerodepontosturisticos;

  printf("INSIRA OS DADOS DA CARTA 01: \n ");

  printf("DIGITE O ESTADO: \n ");
  scanf("%s", Estado);

  printf("DIGITE O NOME DA CIDADE: \n ");
  scanf("%s", Nomedacidade );

  printf("DIGITE O CODIGO DA CARTA: \n");
  scanf("%s", Codigodacarta);

  printf("DIGITE A POPULAÇÃO \n ");
  scanf("%d", &Populacao);

  printf("DIGITE A ÁREA POR METRO QUADRADO \n ");
  scanf("%f", &Areametro);

  printf("DIGITE O PIB \n ");
  scanf("%f", &PIB);

  printf("DIGITE O NUMERO DE PONTOS TURISTICOS \n ");
  scanf("%d", &Numerodepontosturisticos);

  printf("DESCRIÇÃO DA CARTA 01 \n, \n, ESTADO: %s \n, CODIGO: %s \n, NOME DA CIDADE: %s \n, POPULAÇÃO: %d \n, ÁREA POR METRO QUADRADO: %f \n, PIB: %f \n, NUMERO DE PONTOS TURISTICO: %d \n" ,Estado,Nomedacidade,Codigodacarta,Populacao,Areametro,PIB,Numerodepontosturisticos);

printf("INSIRA OS DADOS DA CARTA 02: \n ");

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
