#include <stdio.h>

int main() {
    // Carta 1
    char Estado1[50], Nomedacidade1[50], Codigodacarta1[10];
    unsigned long int Populacao1, Pontos1;
    float Area1, PIB1;
    float Densidade1, PIBpercapta1, Superpoder1;

    // Carta 2
    char Estado2[50], Nomedacidade2[50], Codigodacarta2[10];
    unsigned long int Populacao2, Pontos2;
    float Area2, PIB2;
    float Densidade2, PIBpercapta2, Superpoder2;

    // Entrada Carta 1
    printf("== INSIRA OS DADOS DA CARTA 01 ==\n");
    printf("Estado: ");
    scanf("%s", Estado1);
    printf("Cidade: ");
    scanf("%s", Nomedacidade1);
    printf("Código: ");
    scanf("%s", Codigodacarta1);
    printf("População: ");
    scanf("%lu", &Populacao1);
    printf("Área (km²): ");
    scanf("%f", &Area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &PIB1);
    printf("Pontos turísticos: ");
    scanf("%lu", &Pontos1);

    // Entrada Carta 2
    printf("\n== INSIRA OS DADOS DA CARTA 02 ==\n");
    printf("Estado: ");
    scanf("%s", Estado2);
    printf("Cidade: ");
    scanf("%s", Nomedacidade2);
    printf("Código: ");
    scanf("%s", Codigodacarta2);
    printf("População: ");
    scanf("%lu", &Populacao2);
    printf("Área (km²): ");
    scanf("%f", &Area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &PIB2);
    printf("Pontos turísticos: ");
    scanf("%lu", &Pontos2);

    // Cálculos
    Densidade1 = Populacao1 / Area1;
    Densidade2 = Populacao2 / Area2;

    PIBpercapta1 = (PIB1 * 1000000000) / Populacao1;
    PIBpercapta2 = (PIB2 * 1000000000) / Populacao2;

    Superpoder1 = Populacao1 + Area1 + PIB1 + PIBpercapta1 + Pontos1;
    Superpoder2 = Populacao2 + Area2 + PIB2 + PIBpercapta2 + Pontos2;

    // Exibir cartas
    printf("\n== CARTA 01 ==\n");
    printf("Estado: %s\nCidade: %s\nCódigo: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %lu\n",
           Estado1, Nomedacidade1, Codigodacarta1, Populacao1, Area1, PIB1, Pontos1);
    printf("Densidade populacional: %.2f\nPIB per capita: %.2f\nSuper poder: %.2f\n",
           Densidade1, PIBpercapta1, Superpoder1);

    printf("\n== CARTA 02 ==\n");
    printf("Estado: %s\nCidade: %s\nCódigo: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %lu\n",
           Estado2, Nomedacidade2, Codigodacarta2, Populacao2, Area2, PIB2, Pontos2);
    printf("Densidade populacional: %.2f\nPIB per capita: %.2f\nSuper poder: %.2f\n\n",
           Densidade2, PIBpercapta2, Superpoder2);


           //Comparação com if e else

           if (Populacao1 > Populacao2)
           {
              printf("Carta 1 (%s) Venceu - Populacao = (%lu) \n" ,Estado1,Populacao1);
           }else
           {
              printf("Carta 2 (%s) Venceu - Populacao = (%lu) \n" ,Estado2,Populacao2);
           } 

           if (Densidade1 < Densidade2)
           {
              printf("Carta 1 (%s) Venceu - Densidade = (%f)\n" ,Estado1,Densidade1);
           }else
           {
              printf("Carta 2 (%s) Venceu - Densidade = (%f)\n",Estado2,Densidade2);
           }
           
           
           






    return 0;
}
