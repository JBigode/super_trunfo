#include <stdio.h>
#include <stdlib.h> 

int main(){

    // --------- Carta 1 ---------
    char Estado;
    char Codigo[4], NomedaCidade[20];
    int Populacao, NumerodePontosTuristicos;
    float Area, PIB, DensiPop, PIBperCapita;

    printf("Dados da Carta 1:\n\n \n");
    
    printf("Digite o estado: \n");
    scanf("%c", &Estado);

    printf("Digite o código: \n");
    scanf("%s", Codigo);

    printf("Digite o nome da Cidade: \n");
    getchar(); 
    fgets(NomedaCidade, sizeof(NomedaCidade), stdin);

    printf("Digite a população: \n");
    scanf("%d", &Populacao);

    printf("Digite a área: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &NumerodePontosTuristicos);

    // --------- Carta 2 ---------
    char Estado2;
    char Codigo2[4], NomedaCidade2[20];
    int Populacao2, NumerodePontosTuristicos2;
    float Area2, PIB2, DensiPop2, PIBperCapita2;

    printf("Dados da Carta 2:\n\n \n");
    
    printf("Digite o estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o código: \n");
    scanf(" %s", Codigo2);

    printf("Digite o nome da Cidade: \n");
    getchar(); 
    fgets(NomedaCidade2, sizeof(NomedaCidade2), stdin);

    printf("Digite a população: \n");
    scanf("%d", &Populacao2);

    printf("Digite a área: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &NumerodePontosTuristicos2);

    DensiPop = (float) Populacao / Area;
    DensiPop2 = (float) Populacao2 / Area2;
    PIBperCapita = (float) PIB * 1e9 / Populacao;
    PIBperCapita2 = (float) PIB2 * 1e9 / Populacao2;

    system("clear");


    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s", NomedaCidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", DensiPop);
    printf("PIB per Capita: %.2f reais\n\n \n", PIBperCapita);
    

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s", NomedaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensiPop2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

    return 0;
}