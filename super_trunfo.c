#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Adicionado para poder usar a funcao strcspn()
#include <time.h>

int main(){

    // --------- Carta 1 ---------
    char Estado[3];
    char Codigo[4], NomedaCidade[20];
    unsigned long int Populacao;
    int NumerodePontosTuristicos, escolha;
    float Area, PIB, DensiPop, PIBperCapita, SuperPoder1;

    printf("Dados da Carta 1:\n\n \n");
    
    printf("Digite o estado: \n");
    scanf("%s", Estado);
    /* Retirado para diminuir o tempo inserindo os dados.
    printf("Digite o código: \n");
    scanf("%s", Codigo);
    */
    printf("Digite o nome da Cidade: \n");
    getchar(); 
    fgets(NomedaCidade, sizeof(NomedaCidade), stdin);
    NomedaCidade[strcspn(NomedaCidade, "\n")] = 0; // Procura e retira o \n e após substitui pelo \0.
    
    printf("Digite a população: \n");
    scanf("%lu", &Populacao);
    
    printf("Digite a área: \n");
    scanf("%f", &Area);
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &NumerodePontosTuristicos);
    

    // --------- Carta 2 ---------
    char Estado2[3];
    char Codigo2[4], NomedaCidade2[20];
    unsigned long int  Populacao2;
    int NumerodePontosTuristicos2;
    float Area2, PIB2, DensiPop2, PIBperCapita2, SuperPoder2;

    printf("\n\nDados da Carta 2:\n\n \n");
    
    printf("Digite o estado: \n");
    scanf("%s", Estado2);
    /* Retirado para diminuir o tempo inserindo os dados.
    printf("Digite o código: \n");
    scanf(" %s", Codigo2);
    */
    printf("Digite o nome da Cidade: \n");
    getchar(); 
    fgets(NomedaCidade2, sizeof(NomedaCidade2), stdin);
    NomedaCidade2[strcspn(NomedaCidade2, "\n")] = 0; // Procura e retira o \n e após substitui pelo \0.
    
    printf("Digite a população: \n");
    scanf("%lu", &Populacao2);
    
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
    SuperPoder1 = Populacao + Area + PIB + NumerodePontosTuristicos + PIBperCapita + (1 / DensiPop);
    SuperPoder2 = Populacao2 + Area2 + PIB2 + NumerodePontosTuristicos2 + PIBperCapita2 + (1 / DensiPop2);

    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha o atributo para comparar (1 a 7): ");
    scanf("%d", &escolha);


    system("clear");

/* Resultado dos dados quando inseridos
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s", NomedaCidade);
    printf("População: %lu\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", DensiPop);
    printf("PIB per Capita: %.2f reais\n\n \n", PIBperCapita);
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s", NomedaCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensiPop2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    
*/
/* Resultado da comparacao entre as cartas após inserir os dados
    printf("Comparação de Cartas::\n");
    printf("População: Carta %d Venceu (%d)\n", 2- (Populacao > Populacao2), (Populacao > Populacao2));
    printf("Área: Carta %d Venceu (%d)\n", 2 - (Area > Area2), (Area > Area2));
    printf("PIB: Carta %d Venceu (%d)\n", 2 - (PIB > PIB2), (PIB > PIB2));
    printf("Pontos Turísticos: Carta %d Venceu (%d)\n", 2 - (NumerodePontosTuristicos > NumerodePontosTuristicos2), (NumerodePontosTuristicos > NumerodePontosTuristicos2));
    printf("Densidade Populacional: Carta %d Venceu (%d)\n", 1 + (DensiPop > DensiPop2), (DensiPop < DensiPop2)); // menor vence
    printf("PIB per Capita: Carta %d Venceu (%d)\n", 2 - (PIBperCapita > PIBperCapita2), (PIBperCapita > PIBperCapita2));
    printf("Super Poder: Carta %d Venceu (%d)\n", 2 - (SuperPoder1 > SuperPoder2), (SuperPoder1 > SuperPoder2));
*/
/* Comparacao de cartas nivel basico
    printf("Comparação de cartas (Atributo: População):\n\n \n");
    printf("Carta 1 - %s (%s): %lu\n", NomedaCidade, Estado, Populacao);
    printf("Carta 2 - %s (%s): %lu\n", NomedaCidade2, Estado2, Populacao2);
    if (Populacao > Populacao2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomedaCidade);
    } else {
        printf ("Resultado: Carta 2 (%s) venceu!\n\n \n", NomedaCidade2);
    }
*/
    
    printf("\nResultado da comparação:\n");

    switch (escolha) {
    case 1:
        printf("População:\n");
        printf("Carta 1 - %lu\n", Populacao);
        printf("Carta 2 - %lu\n", Populacao2);
        if (Populacao > Populacao2)
            printf("Carta 1 (%s) venceu!\n", NomedaCidade);
        else
            printf("Carta 2 (%s) venceu!\n", NomedaCidade2);
        break;

    case 2:
        printf("Área:\n");
        printf("Carta 1 - %.2f\n", Area);
        printf("Carta 2 - %.2f\n", Area2);
        if (Area > Area2)
            printf("Carta 1 (%s) venceu!\n", NomedaCidade);
        else
            printf("Carta 2 (%s) venceu!\n", NomedaCidade2);
        break;

    case 3:
        printf("PIB:\n");
        printf("Carta 1 - %.2f\n", PIB);
        printf("Carta 2 - %.2f\n", PIB2);
        if (PIB > PIB2)
            printf("Carta 1 (%s) venceu!\n", NomedaCidade);
        else
            printf("Carta 2 (%s) venceu!\n", NomedaCidade2);
        break;

    case 4:
        printf("Pontos Turísticos:\n");
        printf("Carta 1 - %d\n", NumerodePontosTuristicos);
        printf("Carta 2 - %d\n", NumerodePontosTuristicos2);
        if (NumerodePontosTuristicos > NumerodePontosTuristicos2)
            printf("Carta 1 (%s) venceu!\n", NomedaCidade);
        else
            printf("Carta 2 (%s) venceu!\n", NomedaCidade2);
        break;

    case 5:
        printf("Densidade Populacional:\n");
        printf("Carta 1 - %.2f\n", DensiPop);
        printf("Carta 2 - %.2f\n", DensiPop2);
        // menor densidade vence
        if (DensiPop < DensiPop2)
            printf("Carta 1 (%s) venceu!\n", NomedaCidade);
        else
            printf("Carta 2 (%s) venceu!\n", NomedaCidade2);
        break;

    case 6:
        printf("PIB per Capita:\n");
        printf("Carta 1 - R$ %.2f\n", PIBperCapita);
        printf("Carta 2 - R$ %.2f\n", PIBperCapita2);
        if (PIBperCapita > PIBperCapita2)
            printf("Carta 1 (%s) venceu!\n", NomedaCidade);
        else
            printf("Carta 2 (%s) venceu!\n", NomedaCidade2);
        break;

    case 7:
        printf("Super Poder:\n");
        printf("Carta 1 - %.2f\n", SuperPoder1);
        printf("Carta 2 - %.2f\n", SuperPoder2);
        if (SuperPoder1 > SuperPoder2)
            printf("Carta 1 (%s) venceu!\n", NomedaCidade);
        else
            printf("Carta 2 (%s) venceu!\n", NomedaCidade2);
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

return 0;
}