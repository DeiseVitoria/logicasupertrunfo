#include <stdio.h>
int main(){

//Carta 1 - S�o Paulo

    char estado1[] = "SP";
    char codigo1[] = "001";
    char cidade1[] = "S�o Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.0;
    float pib1 = 700000.0;
    int pontosTuristicos1 = 25;

//Calculando densidade e PIB per capta da carta 1

    float densidade1 = densidade1 / area1;
    float pibPerCapta1 = pib1 / populacao1;

//Carta 2 - Rio de Janeiro
    char estado2[] = "RJ";
    char codigo2[] = "002";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1182.0;
    float pib2 = 400000.0;
    int pontosTuristicos2; 30;

//Calculando densidade e PIB per capta da carta 2

    float densidade2 = populacao2 / area2;
    float pibPerCapta2 = pib2 / populacao2;

//Atributo escolhido para compara��o: Popula��o
    printf(" Compara��o de cartas (Atributo: Popula��o)\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

// Compara�a� simples com if
if (populacao1 > populacao2){
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
} else if (populacao2 > populacao1){
    printf("Resultado: carta 2 (%s) venceu!\n", cidade2);
} else {
    printf("Empate!");
}

return 0;

}

// CONSEGUIII!!