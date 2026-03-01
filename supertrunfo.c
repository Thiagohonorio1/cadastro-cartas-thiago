#include <stdio.h>

int main (){

    ////////// carta 1 ////////
   
    int carta1;
    int estado1 = 'A';
    char codigo1 [50] = "A01";
    char cidade1 [50] = "Sao Paulo";
    int populaçao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50;

    ///////// carta 2 /////////

    int carta2;
    int estado2 = 'B';
    char codigo2 [50] = "B02";
    char cidade2 [50] = "Rio De janeiro";
    int populaçao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos_turisticos2 = 30;


//saida de dados carta 1


    printf ("Carta 1: \n\n");

    printf ("Estado: %c \n", estado1);

    printf ("Codigo: %s \n", codigo1);
   
    printf ("Nome da cidade: %s \n", cidade1);
    
    printf ("Populaçao: %d \n", populaçao1);
    
    printf ("Area: %.2f km²\n", area1);
    
    printf ("Pib: %.2f bilhoes de reais \n", pib1);

    printf ("Pontos turisticos: %d \n", pontos_turisticos1);
   
 
    
//saida de dados carta 2

printf ("\nCarta 2: \n\n");

printf ("Estado: %c \n", estado2);

printf ("Codigo: %s \n", codigo2);

printf ("Cidade: %s \n", cidade2);

printf ("Populaçao: %d \n", populaçao2);

printf ("Area: %.2f km² \n", area2);

printf ("Pib: %.2f Bilhoes de reais \n", pib2);

printf ("Pontos turisticos: %d \n", pontos_turisticos2);


return 0;



}
