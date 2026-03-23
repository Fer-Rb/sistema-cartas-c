#include <stdio.h>
#include <string.h>

int main() {
    int escolha;

    // Declaração de variáveis da Carta 1
    char nome_pais[20];
    int populacao, pontosTuristicos;
    float area, PIB, densidade;

    // Declaração de variáveis da Carta 2
    char nome_pais2[20];
    int populacao2, pontosTuristicos2;
    float area2, PIB2, densidade2;

    printf("****Carta 1****\n\n");

    printf("Digite o nome do País:\n");
    fgets(nome_pais, sizeof(nome_pais), stdin);
    nome_pais[strcspn(nome_pais, "\n")] = '\0'; // remove o \n

    printf("Digite a área:\n");
    scanf("%f", &area);
    getchar(); // limpa o Enter

    printf("Digite a quantidade da população:\n");
    scanf("%d", &populacao);
    getchar(); // limpa o Enter deixado no buffer

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos);
    getchar();

    printf("Digite o PIB da sua cidade:\n");
    scanf("%f", &PIB);
    getchar();

    printf("\n****Carta 2****\n\n");

    printf("Digite o nome do País:\n");
    fgets(nome_pais2, sizeof(nome_pais2), stdin);
    nome_pais2[strcspn(nome_pais2, "\n")] = '\0';

    printf("Digite a área:\n");
    scanf("%f", &area2);
    getchar();

    printf("Digite a quantidade da população:\n");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);
    getchar();

    printf("Digite o PIB da sua cidade:\n");
    scanf("%f", &PIB2);
    getchar();

    // cálculo da densidade
    densidade = populacao / area;
    densidade2 = populacao2 / area2;

    // comparação
    printf("\n*****Escolha*****\n");
    printf("Qual atributo você quer para comparação das cartas?\n");
    printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    printf("*****RESULTADO*****\n\n");

    switch (escolha)
    {
    case 1:
        if (populacao > populacao2)
        {
            printf("1. País 1: %s | País 2: %s\n2. Atributo: População\n3. População carta 1: %d | População carta 2: %d\n4. A carta 1 venceu!\n",
                   nome_pais, nome_pais2, populacao, populacao2);
        }
        else if (populacao < populacao2)
        {
            printf("1. País 1: %s | País 2: %s\n2. Atributo: População\n3. População carta 1: %d | População carta 2: %d\n4. A carta 2 venceu!\n",
                   nome_pais, nome_pais2, populacao, populacao2);
        }
        else
        {
            printf("Empate!!\n");
        }
        break;

    case 2:
        if (pontosTuristicos > pontosTuristicos2)
        {
            printf("1. País 1: %s | País 2: %s\n2. Atributo: Pontos Turísticos\n3. Pontos Turísticos carta 1: %d | Pontos Turísticos carta 2: %d\n4. A carta 1 venceu!\n",
                   nome_pais, nome_pais2, pontosTuristicos, pontosTuristicos2);
        }
        else if (pontosTuristicos < pontosTuristicos2)
        {
            printf("1. País 1: %s | País 2: %s\n2. Atributo: Pontos Turísticos\n3. Pontos Turísticos carta 1: %d | Pontos Turísticos carta 2: %d\n4. A carta 2 venceu!\n",
                   nome_pais, nome_pais2, pontosTuristicos, pontosTuristicos2);
        }
        else
        {
            printf("Empate!!\n");
        }
        break;

    case 3: 
         if (area > area2)
        {
            printf("1. País 1: %s | País 2: %s\n2. Atributo: Area\n3. Area carta 1: %.2f | Area carta 2: %.2f\n4. A carta 1 venceu!\n",
                   nome_pais, nome_pais2, area, area2);
        }
        else if (area < area2)
        {
            printf("1. País 1: %s | País 2: %s\n2. Atributo: Area\n3. Area carta 1: %.2f | Area carta 2: %.2f\n4. A carta 2 venceu!\n",
                   nome_pais, nome_pais2, area, area2);
        }
        else
        {
            printf("Empate!!\n");
        }
        break;

    case 4: 
         if (PIB > PIB2)
        {
            printf("1. País 1: %s | País 2: %s\n2. Atributo: PIB\n3. PIB carta 1: %.2f | PIB carta 2: %.2f\n4. A carta 1 venceu!\n",
                   nome_pais, nome_pais2, PIB, PIB2);
        }
        else if (PIB < PIB2)
        {
            printf("1. País 1: %s | País 2: %s\n2. Atributo: PIB\n3. PIB carta 1: %f | PIB carta 2: %f\n4. A carta 2 venceu!\n",
                   nome_pais, nome_pais2, PIB, PIB2);
        }
        else
        {
            printf("Empate!!\n");
        }
        break;

     case 5: 
         if (densidade < densidade2)
        {
            printf("1. País 1: %s | País 2: %s\n2. Atributo: Densidade\n3. Densidade carta 1: %.2f | Densidade carta 2: %.2f\n4. A carta 1 venceu!\n",
                   nome_pais, nome_pais2, densidade, densidade2);
        }
        else if (densidade > densidade2)
        {
            printf("1. País 1: %s | País 2: %s\n2. Atributo: Densidade\n3. Densidade carta 1: %.2f | Densidade carta 2: %.2f\n4. A carta 2 venceu!\n",
                   nome_pais, nome_pais2, densidade, densidade2);
        }
        else
        {
            printf("Empate!!\n");
        }
        break;
        
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}